#include "lifepi.h"
#include "ui_lifepi.h"

Lifepi::Lifepi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lifepi)
{
    ui->setupUi(this);
}

Lifepi::~Lifepi()
{
    delete ui;
}

void Lifepi::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit newfilms(); // И вызываем сигнал на открытие окна
}
