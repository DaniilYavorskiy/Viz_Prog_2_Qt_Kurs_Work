#include "one.h"
#include "ui_one.h"

One::One(QWidget *parent) : QWidget(parent),
    ui(new Ui::One)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::oneWindow, this, &One::show);
}

One::~One()
{
    delete ui;
}

void One::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void One::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
