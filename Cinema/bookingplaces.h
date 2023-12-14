#ifndef BOOKINGPLACES_H
#define BOOKINGPLACES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlTableModel>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class BookingPlaces;
}

class BookingPlaces : public QWidget
{
    Q_OBJECT

public:
    explicit BookingPlaces(QWidget *parent = 0);
    ~BookingPlaces();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::BookingPlaces *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // BOOKINGPLACES_H
