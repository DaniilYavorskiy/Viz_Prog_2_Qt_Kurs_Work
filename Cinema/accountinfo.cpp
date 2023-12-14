#include "accountinfo.h"
#include "ui_accountinfo.h"
#include <QMessageBox>

#define VVOD_FAM_NAME "^[А-Я][а-я]+([а-я])"
#define VVOD_LOGIN_PASS "^[A-Za-z0-9]+([A-Z0-9][a-z0-9])"

Accountinfo::Accountinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Accountinfo)
{
    ui->setupUi(this);    
    //проверка на ввод данных имени и фамилии
    QRegExp proverka1(VVOD_FAM_NAME);
    QRegExpValidator *valiName = new QRegExpValidator(proverka1, this);
    ui->txt_name->setValidator(valiName);
    ui->txt_surname->setValidator(valiName);

    //проверка на ввод данных логина и пароля
    QRegExp proverka2(VVOD_LOGIN_PASS);
    QRegExpValidator *valiPass = new QRegExpValidator(proverka2, this);
    ui->txt_username->setValidator(valiPass);
    ui->txt_userpassword->setValidator(valiPass);

    Account conn;
    //проверка на чтение БД
    if(conn.connOpen()) {
        qDebug("Connected...");
    }
    else {
        qDebug("Failed to open the database");
    }
}

Accountinfo::~Accountinfo()
{
    delete ui;
}

void Accountinfo::on_pushButton_Save_clicked()
{
    Account conn;
    QString Name, Surname, Date_of_Birth, username, password;
    Name=ui->txt_name->text();
    Surname=ui->txt_surname->text();
    Date_of_Birth=ui->txt_date->text();
    username=ui->txt_username->text();
    password=ui->txt_userpassword->text();

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
    else{
        QMessageBox::critical(this,tr("Ошибка!"), qry.lastError().text());
    }
}



void Accountinfo::on_pushButton_Edit_clicked()
{
    Account conn;
    QString Name, Surname, Date_of_Birth, username, password;
    Name=ui->txt_name->text();
    Surname=ui->txt_surname->text();
    Date_of_Birth=ui->txt_date->text();
    username=ui->txt_username->text();
    password=ui->txt_userpassword->text();

    if(!conn.connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update users set Name='"+Name+"', Surname='"+Surname+"', Date_of_Birth='"+Date_of_Birth+"', username='"+username+"', password='"+password+"' where Surname='"+Surname+"'");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Успешно!"), tr("Данные изменены!"));
        conn.connClose();
    }
    else{
        QMessageBox::critical(this,tr("Ошибка!"), qry.lastError().text());
    }
}

void Accountinfo::on_pushButton_Delete_clicked()
{
    Account conn;
    QString Name, Surname, Date_of_Birth, username, password;
    Name=ui->txt_name->text();
    Surname=ui->txt_surname->text();
    Date_of_Birth=ui->txt_date->text();
    username=ui->txt_username->text();
    password=ui->txt_userpassword->text();

    if(!conn.connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("delete from users where Surname='"+Surname+"'");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Успешно!"), tr("Данные удалены!"));
        conn.connClose();
    }
    else{
        QMessageBox::critical(this,tr("Ошибка!"), qry.lastError().text());
    }
}

void Accountinfo::on_pushButton_load_tab_clicked()
{
    Account conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select Surname from users");

    qry->exec();
    modal->setQuery(*qry);
    ui->comboBox->setModel(modal);
    conn.connClose();
    qDebug() << (modal->rowCount());
}

void Accountinfo::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString Surname = ui->comboBox->currentText();

    Account conn;
    if(!conn.connOpen()){

        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from users where  Surname='"+Surname+"'");

    if(qry.exec( ))
    {
        while(qry.next())
        {
            ui->txt_name->setText(qry.value(0).toString());
            ui->txt_surname->setText(qry.value(1).toString());
            ui->txt_date->setText(qry.value(2).toString());
            ui->txt_username->setText(qry.value(3).toString());
            ui->txt_userpassword->setText(qry.value(4).toString());
        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Ошибка!"), qry.lastError().text());
    }
    conn.connOpen();
    QSqlQuery qry1;
    qry1.prepare("select Film, Places, Date_of_session, Time_of_session from booking where Surname='"+Surname+"'");

    if(qry1.exec( ))
    {
        while(qry1.next())
        {
            ui->txt_film->setText(qry1.value(0).toString());
            ui->txt_places->setText(qry1.value(1).toString());
            ui->txt_dat->setText(qry1.value(2).toString());
            ui->txt_time->setText(qry1.value(3).toString());
        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Ошибка!"), qry1.lastError().text());
    }
}

void Accountinfo::on_pushButton_2_clicked()
{
    this->close();
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Accountinfo::on_pushButton_clicked()
{
    ui->txt_name->clear();
    ui->txt_surname->clear();
    ui->txt_date->clear();
    ui->txt_username->clear();
    ui->txt_userpassword->clear();
    ui->txt_film->clear();
    ui->txt_places->clear();
   //ui->txt_dat->clear();
    ui->txt_time->clear();
}
