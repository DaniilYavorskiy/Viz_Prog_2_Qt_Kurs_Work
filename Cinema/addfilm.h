#ifndef ADDFILM_H
#define ADDFILM_H

#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include "newfilms.h"
#include "saveaddfilm.h"

namespace Ui {
class AddFilm;
}

class AddFilm : public QWidget
{
    Q_OBJECT

public:
    explicit AddFilm(QWidget *parent = nullptr);
    ~AddFilm();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
    void secondWindow();  // Сигнал для окна новинок на открытие
    void sendData(QString str);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_Load_clicked();
    void on_pushButton_Add_clicked();
    void on_pushButton_clear_clicked();

private:
    Ui::AddFilm *ui;
    NewFilms *thirdWindow;
    SaveaddFilm *savefilm;
};

#endif // ADDFILM_H
