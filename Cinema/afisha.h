#ifndef AFISHA_H
#define AFISHA_H

#include <QWidget>
#include "legend.h"
#include "one.h"
#include "begyshiy.h"
#include "mars.h"
#include "malif.h"
#include "girl.h"
#include "kruella.h"
#include "ford.h"
#include "luci.h"
#include "dyavol.h"
#include "newfilms.h"

namespace Ui {
class Afisha;
}

class Afisha : public QWidget
{
    Q_OBJECT

public:
    explicit Afisha(QWidget *parent = 0);
    ~Afisha();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

private:
    Ui::Afisha *ui;
    Legend *secondWindow;
    One *thirdWindow;
    Begyshiy *fourthWindow;
    Mars *fifthWindow;
    Malif *sixWindow;
    Girl *sevenWindow;
    Kruella *eightWindow;
    Ford *nineWindow;
    Luci *tenWindow;
    Dyavol *elevenWindow;
    NewFilms *twelveWindow;
};

#endif // AFISHA_H
