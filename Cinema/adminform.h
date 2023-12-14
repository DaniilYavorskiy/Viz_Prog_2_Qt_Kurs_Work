#ifndef ADMINFORM_H
#define ADMINFORM_H

#include <QMainWindow>

namespace Ui {
class AdminForm;
}

class AdminForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminForm(QWidget *parent = 0);
    ~AdminForm();


signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::AdminForm *ui;
};

#endif // ADMINFORM_H
