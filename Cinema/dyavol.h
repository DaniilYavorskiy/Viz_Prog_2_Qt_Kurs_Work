#ifndef DYAVOL_H
#define DYAVOL_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Dyavol;
}

class Dyavol : public QWidget
{
    Q_OBJECT

public:
    explicit Dyavol(QWidget *parent = 0);
    ~Dyavol();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Dyavol *ui;
    UserCheck *secondWindow;
};

#endif // DYAVOL_H
