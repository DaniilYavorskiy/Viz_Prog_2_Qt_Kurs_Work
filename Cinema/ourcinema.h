#ifndef OURCINEMA_H
#define OURCINEMA_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlTableModel>
#include <QtSql>
#include <QFileInfo>
namespace Ui {
class OurCinema;
}

class OurCinema : public QWidget
{
    Q_OBJECT

public:
    explicit OurCinema(QWidget *parent = 0);
    ~OurCinema();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::OurCinema *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // OURCINEMA_H
