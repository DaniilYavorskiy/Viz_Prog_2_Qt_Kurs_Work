#ifndef LIFEPI_H
#define LIFEPI_H

#include <QWidget>

namespace Ui {
class Lifepi;
}

class Lifepi : public QWidget
{
    Q_OBJECT

public:
    explicit Lifepi(QWidget *parent = 0);
    ~Lifepi();

signals:
    void newfilms();  // Сигнал для окна newfilms на открытие

private slots:
    void on_pushButton_clicked();

public:
    Ui::Lifepi *ui;
};

#endif // LIFEPI_H
