#include "comments.h"
#include "ui_comments.h"

Comments::Comments(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Comments)
{
    ui->setupUi(this);      
}

Comments::~Comments()
{
    delete ui;
}

void Comments::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
