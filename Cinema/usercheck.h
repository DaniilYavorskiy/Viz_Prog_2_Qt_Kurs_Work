#ifndef USERCHECK_H
#define USERCHECK_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "tickets.h"
#include "account.h"

namespace Ui {
class UserCheck;
}

class UserCheck : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

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
    explicit UserCheck(QWidget *parent = 0);
    ~UserCheck();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
    void registrationWindow();
    void legendWindow();
    void oneWindow();
    void begyshiyWindow();
    void marsWindow();
    void malifWindow();
    void girlWindow();
    void kruellaWindow();
    void fordWindow();
    void luciWindow();
    void dyavolWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::UserCheck *ui;
    Account *secondWindow;
};

#endif // USERCHECK_H
