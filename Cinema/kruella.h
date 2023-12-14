#ifndef KRUELLA_H
#define KRUELLA_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Kruella;
}

class Kruella : public QWidget
{
    Q_OBJECT

public:
    explicit Kruella(QWidget *parent = 0);
    ~Kruella();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Kruella *ui;
    UserCheck *secondWindow;
};

#endif // KRUELLA_H
