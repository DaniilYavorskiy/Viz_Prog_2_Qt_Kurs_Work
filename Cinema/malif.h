#ifndef MALIF_H
#define MALIF_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Malif;
}

class Malif : public QWidget
{
    Q_OBJECT

public:
    explicit Malif(QWidget *parent = 0);
    ~Malif();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Malif *ui;
    UserCheck *secondWindow;
};

#endif // MALIF_H
