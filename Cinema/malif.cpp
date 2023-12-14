#include "malif.h"
#include "ui_malif.h"

Malif::Malif(QWidget *parent) : QWidget(parent),
    ui(new Ui::Malif)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::malifWindow, this, &Malif::show);
}

Malif::~Malif()
{
    delete ui;
}

void Malif::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Malif::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
