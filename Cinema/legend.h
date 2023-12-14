#ifndef LEGEND_H
#define LEGEND_H

#include "usercheck.h"
#include <QWidget>


namespace Ui {
class Legend;
}

class Legend : public QWidget
{
    Q_OBJECT

public:
    explicit Legend(QWidget *parent = 0);
    ~Legend();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Legend *ui;
    UserCheck *secondWindow;
};

#endif // LEGEND_H
