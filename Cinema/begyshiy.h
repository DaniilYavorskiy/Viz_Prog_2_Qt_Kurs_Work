#ifndef BEGYSHIY_H
#define BEGYSHIY_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Begyshiy;
}

class Begyshiy : public QWidget
{
    Q_OBJECT

public:
    explicit Begyshiy(QWidget *parent = 0);
    ~Begyshiy();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Begyshiy *ui;    
    UserCheck *secondWindow;
};

#endif // BEGYSHIY_H
