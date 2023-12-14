#include "begyshiy.h"
#include "ui_begyshiy.h"

Begyshiy::Begyshiy(QWidget *parent) : QWidget(parent),
    ui(new Ui::Begyshiy)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::begyshiyWindow, this, &Begyshiy::show);
}

Begyshiy::~Begyshiy()
{
    delete ui;
}

void Begyshiy::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Begyshiy::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
