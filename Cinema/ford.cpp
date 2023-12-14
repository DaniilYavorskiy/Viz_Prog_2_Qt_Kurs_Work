#include "ford.h"
#include "ui_ford.h"

Ford::Ford(QWidget *parent) : QWidget(parent),
    ui(new Ui::Ford)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::fordWindow, this, &Ford::show);
}

Ford::~Ford()
{
    delete ui;
}

void Ford::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Ford::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
