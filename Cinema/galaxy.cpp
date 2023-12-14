#include "galaxy.h"
#include "ui_galaxy.h"

Galaxy::Galaxy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Galaxy)
{
    ui->setupUi(this);
}

Galaxy::~Galaxy()
{
    delete ui;
}

void Galaxy::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit newfilms(); // И вызываем сигнал на открытие окна
}
