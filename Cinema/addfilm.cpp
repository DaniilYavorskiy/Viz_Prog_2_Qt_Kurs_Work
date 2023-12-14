#include "addfilm.h"
#include "ui_addfilm.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

#define VVOD_YEAR "^[1-2]+([0,9]+[0,1,2,8,9]+[0-9])"
#define VVOD_RATING "^[0-9]+[,]+[0-9]"

AddFilm::AddFilm(QWidget *parent) : QWidget(parent),
    ui(new Ui::AddFilm)
{
    ui->setupUi(this);
    savefilm = new SaveaddFilm(); // создаем форму
    connect(ui->pushButton_Add, SIGNAL(clicked()), this, SLOT());
    connect(this, SIGNAL(sendData(QString)), savefilm, SLOT(recieveData(QString)));

    //проверка на ввод года
    QRegExp proverka1(VVOD_YEAR);
    QRegExpValidator *valiYear = new QRegExpValidator(proverka1, this);
    ui->Year->setValidator(valiYear);

    //проверка на ввод года
    QRegExp proverka2(VVOD_RATING);
    QRegExpValidator *valiRating = new QRegExpValidator(proverka2, this);
    ui->Rating->setValidator(valiRating);

    // Инициализируем 2-е окно
    thirdWindow = new NewFilms();
    // подключаем к слоту запуска окна добавления фильма по кнопке во втором окне
    connect(thirdWindow, &NewFilms::afishaWindow, this, &AddFilm::show);
}

AddFilm::~AddFilm()
{
    delete ui;
}

void AddFilm::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void AddFilm::on_pushButton_3_clicked()
{
    this->close();      // Закрываем окно
    thirdWindow->show(); // Показываем окно
}

void AddFilm::on_Load_clicked()
{
    QString filename = QFileDialog::getOpenFileName(nullptr, "Выберите изображение", QDir::currentPath(), "*.png *.jpg *.jpeg");
    ui->afishapath->setText(filename);
    QImage image1(filename);
    ui->afisha->setPixmap(QPixmap::fromImage(image1));
}

void AddFilm::on_pushButton_Add_clicked()
{
    if (ui->afishapath->text() == "" or ui->NameofFilm->text() == "" or ui->Opisanie->toPlainText() == "" or ui->Year->text() == "" or ui->Rating->text() == "")
    {
        QMessageBox::critical(this, "Ошибка!", "Заполните все поля, прежде чем добавить фильм");
        return;
    }
    savefilm->show();
    QString st = ui->afishapath->text() + "*"
            + "Название фильма: " + ui->NameofFilm->text() + "\n\n"
            + "Описание:" + "\n" + ui->Opisanie->toPlainText() + "\n\n"
            + "Год выпуска: " + ui->Year->text() + "\n\n"
            + "Рейтинг фильма: " + ui->Rating->text();
    emit sendData(st);    
}

void AddFilm::on_pushButton_clear_clicked()
{
    ui->afisha->clear();
    ui->afishapath->clear();
    ui->NameofFilm->clear();
    ui->Opisanie->clear();
    ui->Year->clear();
    ui->Rating->clear();
}
