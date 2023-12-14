#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent, QString name) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //сохранение настроек, используя редактор реестра
    settings = new QSettings(this);

    //сохранение настроек, используя файл расширения .ini
    //settings = new QSettings("C:/Users/79133/QtProjects/Cinema/settings.ini", QSettings::IniFormat, this);

    setObjectName(name);
    setWindowTitle(name);

    loadSettings();

        // Инициализируем 2-е окно
        secondWindow = new Afisha();
        // подключаем к слоту запуска главного окна по кнопке во втором окне
        connect(secondWindow, &Afisha::firstWindow, this, &MainWindow::show);

        // Инициализируем 3-е окно
        thirdWindow = new OurCinema();
        // подключаем к слоту запуска главного окна по кнопке в третьем окне
        connect(thirdWindow, &OurCinema::firstWindow, this, &MainWindow::show);

        // Инициализируем 4-е окно
        fourthWindow = new Account();
        // подключаем к слоту запуска главного окна по кнопке в четвертом окне
        connect(fourthWindow, &Account::firstWindow, this, &MainWindow::show);

        // Инициализируем 5-е окно
        fifthWindow = new Comments();
        // подключаем к слоту запуска главного окна по кнопке в пятом окне
        connect(fifthWindow, &Comments::firstWindow, this, &MainWindow::show);

        // Инициализируем 6-е окно
        sixWindow = new Help();
        // подключаем к слоту запуска главного окна по кнопке в шестом окне
        connect(sixWindow, &Help::firstWindow, this, &MainWindow::show);

        // Инициализируем 7-е окно
        sevenWindow = new AdminForm();
        // подключаем к слоту запуска главного окна по кнопке в седьмом окне
        connect(sevenWindow, &AdminForm::firstWindow, this, &MainWindow::show);

        // Инициализируем 8-е окно
        eightWindow = new AddFilm();
        // подключаем к слоту запуска главного окна по кнопке в восьмом окне
        connect(eightWindow, &AddFilm::firstWindow, this, &MainWindow::show);

        // Инициализируем 9-е окно
        nineWindow = new BookingPlaces();
        // подключаем к слоту запуска главного окна по кнопке в девяятом окне
        connect(nineWindow, &BookingPlaces::firstWindow, this, &MainWindow::show);

        // Инициализируем 10-е окно
        tenWindow = new Accountinfo();
        // подключаем к слоту запуска главного окна по кнопке в десятом окне
        connect(tenWindow, &Accountinfo::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    saveSettings();
    delete ui;
}

//сохранение настроек QSettings и их загрузка
void MainWindow::saveSettings()
{
    settings->beginGroup("MainWindow"); //задаём имя подпапки в редакторе реестра
    settings->beginGroup(objectName());
    settings->setValue("geometry", geometry());
    settings->endGroup();
    settings->endGroup();
}

void MainWindow::loadSettings()
{
    settings->beginGroup("MainWindow"); //задаём имя подпапки в редакторе реестра
    settings->beginGroup(objectName());
    setGeometry(settings->value("geometry", QRect(850, 850, 500, 500)).toRect());
    settings->endGroup();
    settings->endGroup();
}

//переключение окон с помощью кнопок
void MainWindow::on_pushButton_clicked()
{
    secondWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_pushButton_2_clicked()
{
    thirdWindow->show();  // Показываем третье окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_pushButton_3_clicked()
{
    fourthWindow->show();  // Показываем четвертое окно
    this->close();    // Закрываем основное окно
}


void MainWindow::on_action_triggered()
{
    QApplication::quit(); // Выход
}

//переключение окон с помощью вкладок
void MainWindow::on_action_2_triggered()
{
    secondWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_action_3_triggered()
{
    thirdWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}


void MainWindow::on_action_4_triggered()
{
    fourthWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_action_5_triggered()
{
    fifthWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_action_6_triggered()
{
    sixWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_pushButton_Admin_clicked()
{
    sevenWindow->show();
    this->close();    // Закрываем основное окно
    ui->menuAdminfunctions->setEnabled(true); //При входе в приложение через окно входа админа становится доступна 4 вкладка во вкладке "Меню"
}

void MainWindow::on_action_7_triggered()
{
    eightWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_action_8_triggered()
{
    nineWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_action_9_triggered()
{
    tenWindow->show();  // Показываем окно
    this->close();    // Закрываем основное окно
}
