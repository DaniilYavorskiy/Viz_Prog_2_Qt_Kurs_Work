#ifndef MARS_H
#define MARS_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Mars;
}

class Mars : public QWidget
{
    Q_OBJECT

public:
    explicit Mars(QWidget *parent = 0);
    ~Mars();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Mars *ui;
    UserCheck *secondWindow;
};

#endif // MARS_H
