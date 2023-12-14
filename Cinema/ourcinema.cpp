#include "ourcinema.h"
#include "ui_ourcinema.h"

OurCinema::OurCinema(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OurCinema)
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
    model->setTable("Addresses");
    model->select();

    ui->tableView->setModel(model);
}

OurCinema::~OurCinema()
{
    delete ui;
}

void OurCinema::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
