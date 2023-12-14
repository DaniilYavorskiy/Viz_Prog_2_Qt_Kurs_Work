#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <QDialog>
#include "account.h"

namespace Ui {
class Accountinfo;
}

class Accountinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Accountinfo(QWidget *parent = 0);
    ~Accountinfo();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_Save_clicked();
    void on_pushButton_Edit_clicked();
    void on_pushButton_Delete_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_load_tab_clicked();
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_pushButton_clicked();

private:
    Ui::Accountinfo *ui;
};

#endif // ACCOUNTINFO_H
