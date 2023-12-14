#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    this->setMaximumSize(this->width(), this->height());
    this->setMinimumSize(this->width(), this->height());

    ui->textBrowser->setSource(QUrl::fromLocalFile(":/rec/helpNavigator/index.html"));
}

Help::~Help()
{
    delete ui;
}

void Help::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
