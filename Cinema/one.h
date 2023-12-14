#ifndef ONE_H
#define ONE_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class One;
}

class One : public QWidget
{
    Q_OBJECT

public:
    explicit One(QWidget *parent = 0);
    ~One();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::One *ui;
    UserCheck *secondWindow;
};

#endif // ONE_H
