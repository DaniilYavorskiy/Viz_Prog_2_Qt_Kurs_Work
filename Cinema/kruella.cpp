#include "kruella.h"
#include "ui_kruella.h"

Kruella::Kruella(QWidget *parent) : QWidget(parent),
    ui(new Ui::Kruella)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::kruellaWindow, this, &Kruella::show);
}

Kruella::~Kruella()
{
    delete ui;
}

void Kruella::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Kruella::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
