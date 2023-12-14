#ifndef ACCOUNTINFOUSER_H
#define ACCOUNTINFOUSER_H

#include <QDialog>
#include "account.h"

namespace Ui {
class AccountinfoUser;
}

class AccountinfoUser : public QDialog
{
    Q_OBJECT

public:
    explicit AccountinfoUser(QWidget *parent = 0);
    ~AccountinfoUser();

signals:
    void firstWindow(); // Сигнал для первого окна на открытие    


private slots:
    void on_pushButton_Edit_clicked();
    void on_pushButton_Delete_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_load_tab_clicked();
    void on_comboBox_currentIndexChanged(const QString &arg1);

public:
    Ui::AccountinfoUser *ui;
};

#endif // ACCOUNTINFOUSER_H
