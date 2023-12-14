#include "dyavol.h"
#include "ui_dyavol.h"

Dyavol::Dyavol(QWidget *parent) : QWidget(parent),
    ui(new Ui::Dyavol)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::dyavolWindow, this, &Dyavol::show);
}

Dyavol::~Dyavol()
{
    delete ui;
}

void Dyavol::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Dyavol::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
