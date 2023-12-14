#include "newfilms.h"
#include "ui_newfilms.h"
#include "ui_lifepi.h"
#include "ui_oblasti.h"
#include "ui_nfs.h"
#include "ui_galaxy.h"
#include "ui_born.h"
#include "ui_addfilm.h"

#include <QFile>
#include <QString>
#include <QTextStream>


NewFilms::NewFilms(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewFilms)
{
    ui->setupUi(this);

    // Инициализируем 2-е окно
    secondWindow = new Lifepi();
    connect(secondWindow, &Lifepi::newfilms, this, &NewFilms::show);

    // Инициализируем 3-е окно
    thirdWindow = new Oblasti();
    connect(thirdWindow, &Oblasti::newfilms, this, &NewFilms::show);

    // Инициализируем 4-е окно
    fourthWindow = new Nfs();
    connect(fourthWindow, &Nfs::newfilms, this, &NewFilms::show);

    // Инициализируем 5-е окно
    fifthWindow = new Galaxy();
    connect(fifthWindow, &Galaxy::newfilms, this, &NewFilms::show);

    // Инициализируем 6-е окно
    sixWindow = new Born();
    connect(sixWindow, &Born::newfilms, this, &NewFilms::show);
}

NewFilms::~NewFilms()
{
    delete ui;
}

void NewFilms::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit afishaWindow(); // И вызываем сигнал на открытие окна
}

void NewFilms::on_pushButton_2_clicked()
{
    secondWindow->show();  // Показываем окно
    QString str = "C:/Users/79133/QtProjects/Cinema/newfilms/lifePi.txt";
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) //Проверяем, возможно ли открыть наш файл для чтения
    {
        QTextStream stream(&file);
        secondWindow->ui->textEdit->setPlainText(stream.readAll()); //передаем нужный виджет из другого окна
        QImage image1("C:/Users/79133/QtProjects/lifePi.jpg");
        secondWindow->ui->label->setPixmap(QPixmap::fromImage(image1));
        file.close();
        this->close();    // Закрываем основное окно
    }
}

void NewFilms::on_pushButton_3_clicked()
{
    thirdWindow->show();  // Показываем окно
    QString str = "C:/Users/79133/QtProjects/Cinema/newfilms/Oblasti.txt";
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) //Проверяем, возможно ли открыть наш файл для чтения
    {
        QTextStream stream(&file);
        thirdWindow->ui->textEdit->setPlainText(stream.readAll()); //передаем нужный виджет из другого окна
        QImage image2("C:/Users/79133/QtProjects/oblasti.jpg");
        thirdWindow->ui->label->setPixmap(QPixmap::fromImage(image2));
        file.close();
        this->close();    // Закрываем основное окно
    }
}

void NewFilms::on_pushButton_4_clicked()
{
    fourthWindow->show();  // Показываем окно
    QString str = "C:/Users/79133/QtProjects/Cinema/newfilms/Nfs.txt";
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) //Проверяем, возможно ли открыть наш файл для чтения
    {
        QTextStream stream(&file);
        fourthWindow->ui->textEdit->setPlainText(stream.readAll()); //передаем нужный виджет из другого окна
        QImage image3("C:/Users/79133/QtProjects/nfs.jpg");
        fourthWindow->ui->label->setPixmap(QPixmap::fromImage(image3));
        file.close();
        this->close();    // Закрываем основное окно
    }
}

void NewFilms::on_pushButton_5_clicked()
{
    fifthWindow->show();  // Показываем окно
    QString str = "C:/Users/79133/QtProjects/Cinema/newfilms/Galaxy.txt";
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) //Проверяем, возможно ли открыть наш файл для чтения
    {
        QTextStream stream(&file);
        fifthWindow->ui->textEdit->setPlainText(stream.readAll()); //передаем нужный виджет из другого окна
        QImage image4("C:/Users/79133/QtProjects/galaxy.jpg");
        fifthWindow->ui->label->setPixmap(QPixmap::fromImage(image4));
        file.close();
        this->close();    // Закрываем основное окно
    }
}

void NewFilms::on_pushButton_6_clicked()
{
    sixWindow->show();  // Показываем окно
    QString str = "C:/Users/79133/QtProjects/Cinema/newfilms/Born.txt";
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) //Проверяем, возможно ли открыть наш файл для чтения
    {
        QTextStream stream(&file);
        sixWindow->ui->textEdit->setPlainText(stream.readAll()); //передаем нужный виджет из другого окна
        QImage image5("C:/Users/79133/QtProjects/born.jpg");
        sixWindow->ui->label->setPixmap(QPixmap::fromImage(image5));
        file.close();
        this->close();    // Закрываем основное окно
    }
}
