#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "accountinfouser.h"
#include "ui_account.h"         //добавил это

namespace Ui {
class Account;
}

class Account : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

  /*  //добавил это
    QString getText() {
            return ui->lineEdit_username->text();
        }
//*/
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/79133/QtProjects/Cinema/db/myCinema.db");
        //проверка на чтение БД
        if(mydb.open()) {
            qDebug("Connected...");
            return true;
        }
        else {
            qDebug("Failed to open the database");
            return false;
        }
    }

public:
    explicit Account(QWidget *parent = 0);
    ~Account();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
    void usercheckWindow();

private slots:
    // Слот-обработчик нажатия кнопок
    void on_pushButton_clicked();
    void on_pushButton_vhod_clicked();
    void on_pushButton_registration_clicked();

private:
    Ui::Account *ui;
};

#endif // ACCOUNT_H


