#ifndef LUCI_H
#define LUCI_H

#include "usercheck.h"
#include <QWidget>

namespace Ui {
class Luci;
}

class Luci : public QWidget
{
    Q_OBJECT

public:
    explicit Luci(QWidget *parent = 0);
    ~Luci();

signals:
    void afishaWindow();  // Сигнал для окна афиши на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_tickets_clicked();

private:
    Ui::Luci *ui;
    UserCheck *secondWindow;
};

#endif // LUCI_H
