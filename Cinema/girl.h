#ifndef GIRL_H
#define GIRL_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Girl;
}

class Girl : public QWidget
{
    Q_OBJECT

public:
    explicit Girl(QWidget *parent = 0);
    ~Girl();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Girl *ui;
    UserCheck *secondWindow;
};

#endif // GIRL_H
