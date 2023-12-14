#ifndef SAVEADDFILM_H
#define SAVEADDFILM_H

#include <QWidget>

namespace Ui {
class SaveaddFilm;
}

class SaveaddFilm : public QWidget
{
    Q_OBJECT

public:
    explicit SaveaddFilm(QWidget *parent = nullptr);
    ~SaveaddFilm();

public slots:
    void recieveData(QString str);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::SaveaddFilm *ui;
};

#endif // SAVEADDFILM_H
