#include "mainwindow.h"
#include "begyshiy.h"
#include "dyavol.h"
#include "ford.h"
#include "girl.h"
#include "kruella.h"
#include "legend.h"
#include "luci.h"
#include "malif.h"
#include "mars.h"
#include "one.h"
#include <QApplication>
#include <QSplashScreen>
#include <QtWidgets>

void loadModules(QSplashScreen* psplash){
    QTime time;
    time.start();

    for (int i = 0; i < 100;){
        if (time.elapsed()>25){ //скорость запонения процентов
            time.start();
            i++;
        }

        psplash->showMessage("Обновление сеансов: " + QString::number(i) + "%",
                             Qt::AlignCenter, Qt::white);
        qApp->processEvents();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //глобальные настройки приложению
    QApplication::setOrganizationName("Cinema"); //создание папки в редакторе реестра
    QApplication::setApplicationName("SettingsTutorial"); //создание подпапки в редакторе реестра

    QSplashScreen splash(QPixmap("C:\\Users\\79133\\QtProjects\\Cinema\\img\\oboi.jpg"));
    splash.show();
    MainWindow w(0, "Cinema 4D"); //создание подподпапки в редакторе реестра
    QFile file("C:\\Users\\79133\\QtProjects\\Cinema\\css\\StyleForKursWork.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    loadModules(&splash);
    splash.finish(&w);
    w.show();

    return a.exec();
}
