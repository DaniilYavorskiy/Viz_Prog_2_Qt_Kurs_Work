#ifndef OBLASTI_H
#define OBLASTI_H

#include <QWidget>

namespace Ui {
class Oblasti;
}

class Oblasti : public QWidget
{
    Q_OBJECT

public:
    explicit Oblasti(QWidget *parent = 0);
    ~Oblasti();

signals:
    void newfilms();  // Сигнал для окна newfilms на открытие

private slots:
    void on_pushButton_clicked();

public:
    Ui::Oblasti *ui;
};

#endif // OBLASTI_H
