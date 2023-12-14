#include "oblasti.h"
#include "ui_oblasti.h"

Oblasti::Oblasti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Oblasti)
{
    ui->setupUi(this);
}

Oblasti::~Oblasti()
{
    delete ui;
}

void Oblasti::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit newfilms(); // И вызываем сигнал на открытие окна
}
