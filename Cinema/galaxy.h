#ifndef GALAXY_H
#define GALAXY_H

#include <QWidget>

namespace Ui {
class Galaxy;
}

class Galaxy : public QWidget
{
    Q_OBJECT

public:
    explicit Galaxy(QWidget *parent = 0);
    ~Galaxy();

signals:
    void newfilms();  // Сигнал для окна newfilms на открытие

private slots:
    void on_pushButton_clicked();

public:
    Ui::Galaxy *ui;
};

#endif // GALAXY_H
