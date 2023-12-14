#include "mars.h"
#include "ui_mars.h"

Mars::Mars(QWidget *parent) : QWidget(parent),
    ui(new Ui::Mars)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::marsWindow, this, &Mars::show);
}

Mars::~Mars()
{
    delete ui;
}

void Mars::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Mars::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
