#include "adminform.h"
#include "ui_adminform.h"
#include <QMessageBox>
#include <QRegExpValidator>

#define VVOD_LOGIN_PASS "^[A-Za-z0-9]+([A-Z0-9][a-z0-9])"

AdminForm::AdminForm(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::AdminForm)
{
    ui->setupUi(this);

    //проверка на ввод данных логина и пароля
    QRegExp proverka(VVOD_LOGIN_PASS);
    QRegExpValidator *valiPass = new QRegExpValidator(proverka, this);
    ui->login->setValidator(valiPass);
    ui->pass->setValidator(valiPass);
}

AdminForm::~AdminForm()
{
    delete ui;
}

void AdminForm::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();

    if(login == "Admin" && password == "Cinema1"){
    QMessageBox::information(this, "Успешно", "Добро пожаловать!") and this->close(); // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие окна
    }
    else{
    QMessageBox::warning(this, "Ошибка", "Неверные данные для входа");
    }
}

void AdminForm::on_pushButton_2_clicked()
{
    this->close(); // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
