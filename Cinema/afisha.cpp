#include "afisha.h"
#include "ui_afisha.h"

Afisha::Afisha(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Afisha)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new Legend();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &Legend::afishaWindow, this, &Afisha::show);
    // Инициализируем 3-е окно
    thirdWindow = new One();
    connect(thirdWindow, &One::afishaWindow, this, &Afisha::show);
    // Инициализируем 4-е окно
    fourthWindow = new Begyshiy();
    connect(fourthWindow, &Begyshiy::afishaWindow, this, &Afisha::show);
    // Инициализируем 5-е окно
    fifthWindow = new Mars();
    connect(fifthWindow, &Mars::afishaWindow, this, &Afisha::show);
    // Инициализируем 6-е окно
    sixWindow = new Malif();
    connect(sixWindow, &Malif::afishaWindow, this, &Afisha::show);
    // Инициализируем 7-е окно
    sevenWindow = new Girl();
    connect(sevenWindow, &Girl::afishaWindow, this, &Afisha::show);
    // Инициализируем 8-е окно
    eightWindow = new Kruella();
    connect(eightWindow, &Kruella::afishaWindow, this, &Afisha::show);
    // Инициализируем 9-е окно
    nineWindow = new Ford();
    connect(nineWindow, &Ford::afishaWindow, this, &Afisha::show);
    // Инициализируем 10-е окно
    tenWindow = new Luci();
    connect(tenWindow, &Luci::afishaWindow, this, &Afisha::show);
    // Инициализируем 11-е окно
    elevenWindow = new Dyavol();
    connect(elevenWindow, &Dyavol::afishaWindow, this, &Afisha::show);
    // Инициализируем 12-е окно
    twelveWindow = new NewFilms();
    connect(twelveWindow, &NewFilms::afishaWindow, this, &Afisha::show);
}

Afisha::~Afisha()
{
    delete ui;
}

void Afisha::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Afisha::on_pushButton_2_clicked()
{
    secondWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_3_clicked()
{
    thirdWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_4_clicked()
{
    fourthWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_5_clicked()
{
    fifthWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_6_clicked()
{
    sixWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_7_clicked()
{
    sevenWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_8_clicked()
{
    eightWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_9_clicked()
{
    nineWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_10_clicked()
{
    tenWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_11_clicked()
{
    elevenWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void Afisha::on_pushButton_12_clicked()
{
    twelveWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}
