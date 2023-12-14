#ifndef FORD_H
#define FORD_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Ford;
}

class Ford : public QWidget
{
    Q_OBJECT

public:
    explicit Ford(QWidget *parent = 0);
    ~Ford();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Ford *ui;
    UserCheck *secondWindow;
};

#endif // FORD_H
