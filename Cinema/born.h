#ifndef BORN_H
#define BORN_H

#include <QWidget>

namespace Ui {
class Born;
}

class Born : public QWidget
{
    Q_OBJECT

public:
    explicit Born(QWidget *parent = 0);
    ~Born();

signals:
    void newfilms();  // Сигнал для окна newfilms на открытие

private slots:
    void on_pushButton_clicked();

public:
    Ui::Born *ui;
};

#endif // BORN_H
