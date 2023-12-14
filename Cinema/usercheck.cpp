#include "usercheck.h"
#include "ui_usercheck.h"
#include <QMessageBox>
#include <QRegExpValidator>

#define VVOD_LOGIN_PASS "^[A-Za-z0-9]+([A-Z0-9][a-z0-9])"

UserCheck::UserCheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserCheck)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new Account();
    // подключаем к слоту запуска главного окна по кнопке в окне
    connect(secondWindow, &Account::usercheckWindow, this, &Account::show);

    //проверка на ввод данных логина и пароля
    QRegExp proverka(VVOD_LOGIN_PASS);
    QRegExpValidator *valiPass = new QRegExpValidator(proverka, this);
    ui->login->setValidator(valiPass);
    ui->pass->setValidator(valiPass);

    //проверка на чтение БД
    if(connOpen()) {
        qDebug("Connected...");
    }
    else {
        qDebug("Failed to open the database");
    }
}

UserCheck::~UserCheck()
{
    delete ui;
}

void UserCheck::on_pushButton_clicked()
{
    QString username = ui->login->text();
    QString password = ui->pass->text();

    if(!connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;

    if(qry.exec("select 'username' and 'password' from users where username='"+username+"' and password='"+password+"'"))
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            qDebug()<<"Вы успешно авторизовались!";
            connClose();
            ui->login->clear();
            ui->pass->clear();
            this->hide();
            Tickets tickets;
            tickets.setModal(true);
            tickets.exec();
        }
        if(count>1)
            qDebug()<<"Duplicate username and password";
        if(count<1)
        {
            QMessageBox::critical(this,tr("Ошибка!"), tr("Логин или пароль не верен!"));
        }
    }
}

void UserCheck::on_pushButton_2_clicked()
{
    this->close();
}

void UserCheck::on_pushButton_3_clicked()
{
    this->close();
    secondWindow->show(); // И вызываем сигнал на открытие окна

}
