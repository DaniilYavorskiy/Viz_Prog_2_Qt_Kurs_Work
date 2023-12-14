#include "born.h"
#include "ui_born.h"

Born::Born(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Born)
{
    ui->setupUi(this);
}

Born::~Born()
{
    delete ui;
}

void Born::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit newfilms(); // И вызываем сигнал на открытие окна
}
