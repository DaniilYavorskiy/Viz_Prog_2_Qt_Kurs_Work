#ifndef NEWFILMS_H
#define NEWFILMS_H

#include <QWidget>
#include <lifepi.h>
#include <oblasti.h>
#include <nfs.h>
#include <galaxy.h>
#include <born.h>

namespace Ui {
class NewFilms;
}

class NewFilms : public QWidget
{
    Q_OBJECT

public:
    explicit NewFilms(QWidget *parent = 0);
    ~NewFilms();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::NewFilms *ui;    
    Lifepi *secondWindow;
    Oblasti *thirdWindow;
    Nfs *fourthWindow;
    Galaxy *fifthWindow;
    Born *sixWindow;
};


#endif // NEWFILMS_H
