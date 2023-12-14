#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include "afisha.h"
#include "ourcinema.h"
#include "account.h"
#include "accountinfo.h"
#include "comments.h"
#include "help.h"
#include "adminform.h"
#include "addfilm.h"
#include "bookingplaces.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, QString name = "MainForm");
    ~MainWindow();

public:
    void saveSettings();
    void loadSettings();

private slots:
    // Слоты от кнопок главного окна
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_action_triggered();
    void on_action_2_triggered();
    void on_action_3_triggered();
    void on_action_4_triggered();
    void on_action_5_triggered();
    void on_action_6_triggered();
    void on_pushButton_Admin_clicked();
    void on_action_7_triggered();
    void on_action_8_triggered();
    void on_action_9_triggered();

private:
    Ui::MainWindow *ui;
    // 2, 3, 4, 5 и 6 окна
    Afisha *secondWindow;
    OurCinema *thirdWindow;
    Account *fourthWindow;
    Comments *fifthWindow;
    Help *sixWindow;
    AdminForm *sevenWindow;
    AddFilm *eightWindow;
    BookingPlaces *nineWindow;
    Accountinfo *tenWindow;
    QSettings* settings;
};

#endif // MAINWINDOW_H
