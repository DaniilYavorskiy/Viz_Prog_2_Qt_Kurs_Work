#include "bookingplaces.h"
#include "ui_bookingplaces.h"

BookingPlaces::BookingPlaces(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookingPlaces)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/79133/QtProjects/Cinema/db/myCinema.db");
    //проверка на чтение БД
    if(!db.open()) {
        qDebug("Connected...");
    }
    else {
        qDebug("Failed to open the database");
    }

    //выводим таблицу на экран
    model = new QSqlTableModel(this, db);
    model->setTable("booking");
    model->select();

    ui->tableView->setModel(model);
}

BookingPlaces::~BookingPlaces()
{
    delete ui;
}

void BookingPlaces::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
