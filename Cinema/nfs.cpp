#include "nfs.h"
#include "ui_nfs.h"

Nfs::Nfs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nfs)
{
    ui->setupUi(this);
}

Nfs::~Nfs()
{
    delete ui;
}

void Nfs::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit newfilms(); // И вызываем сигнал на открытие окна
}
