#include "girl.h"
#include "ui_girl.h"

Girl::Girl(QWidget *parent) : QWidget(parent),
    ui(new Ui::Girl)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new UserCheck();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &UserCheck::girlWindow, this, &Girl::show);
}

Girl::~Girl()
{
    delete ui;
}

void Girl::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void Girl::on_pushButton_tickets_clicked()
{
    secondWindow->show(); // И вызываем сигнал на открытие окна
}
