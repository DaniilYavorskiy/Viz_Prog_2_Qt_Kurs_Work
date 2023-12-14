#include "account.h"
#include "ui_account.h"
#include "ui_accountinfouser.h"

#include <QMessageBox>
#include <QRegExpValidator>

#define VVOD_FAM_NAME "^[А-Я][а-я]+([а-я])"
#define VVOD_LOGIN_PASS "^[A-Za-z0-9]+([A-Z0-9][a-z0-9])"

Account::Account(QWidget *parent) : QWidget(parent),
    ui(new Ui::Account)
{
    ui->setupUi(this);        

    //проверка на ввод данных имени и фамилии
    QRegExp proverka1(VVOD_FAM_NAME);
    QRegExpValidator *valiName = new QRegExpValidator(proverka1, this);
    ui->txt_name_2->setValidator(valiName);
    ui->txt_surname_2->setValidator(valiName);

    //проверка на ввод данных логина и пароля
    QRegExp proverka2(VVOD_LOGIN_PASS);
    QRegExpValidator *valiPass = new QRegExpValidator(proverka2, this);
    ui->txt_username_2->setValidator(valiPass);
    ui->txt_userpassword_2->setValidator(valiPass);
    ui->lineEdit_username->setValidator(valiPass);
    ui->lineEdit_Password->setValidator(valiPass);

    //аватарка
    QPixmap pix("C:/Users/79133/QtProjects/Cinema/img/inkognito.jpg");
    ui->label_pic->setPixmap(pix);

    //проверка на чтение БД
    if(connOpen()) {
        qDebug("Connected...");
    }
    else {
        qDebug("Failed to open the database");
    }
}

Account::~Account()
{
    delete ui;
}

void Account::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Account::on_pushButton_vhod_clicked()
{
    QString username, password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_Password->text();    

    if(!connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select 'username' and 'password' from users where username='"+username+"' and password='"+password+"'");

    if(qry.exec( ))
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            qDebug()<<"Вы успешно авторизовались!";
           // emit textEntered(username);               //это добавил - удали
            connClose();
            this->hide();
            AccountinfoUser accountinfoUser;
            accountinfoUser.setModal(true);
            accountinfoUser.exec();
        }
        if(count>1)
            qDebug()<<"Duplicate username and password";
        if(count<1)
        {
            QMessageBox::critical(this,tr("Ошибка!"), tr("Логин или пароль не верен!"));
        }
    }
}

void Account::on_pushButton_registration_clicked()
{
    Account conn;
    QString Name, Surname, Date_of_Birth, username, password;
    Name=ui->txt_name_2->text();
    Surname=ui->txt_surname_2->text();
    Date_of_Birth=ui->txt_date_3->text();
    username=ui->txt_username_2->text();
    password=ui->txt_userpassword_2->text();

    if(!conn.connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into users (Name, Surname, Date_of_Birth, username, password) values ('"+Name+"', '"+Surname+"', '"+Date_of_Birth+"', '"+username+"', '"+password+"')");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Успешно!"), tr("Данные сохранены!"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Ошибка!"), tr("Фамилия не указана!"));
    }
}
