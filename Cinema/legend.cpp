#include "legend.h"
#include "ui_legend.h"

Legend::Legend(QWidget *parent) : QWidget(parent),
    ui(new Ui::Legend)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::legendWindow, this, &Legend::show);
}

Legend::~Legend()
{
    delete ui;
}

void Legend::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Legend::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
