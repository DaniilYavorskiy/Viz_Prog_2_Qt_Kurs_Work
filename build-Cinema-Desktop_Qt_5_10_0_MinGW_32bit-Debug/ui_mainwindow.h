/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_Admin;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuAdminfunctions;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(909, 509);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/cinema.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_3->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon3);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/img/reviews.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon4);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/img/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon5);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/img/inkognito.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon6);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_8->setIcon(icon6);
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        action_9->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 380, 591, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 771, 371));
        label->setPixmap(QPixmap(QString::fromUtf8("../kino.jpg")));
        pushButton_Admin = new QPushButton(centralWidget);
        pushButton_Admin->setObjectName(QStringLiteral("pushButton_Admin"));
        pushButton_Admin->setGeometry(QRect(400, 240, 71, 31));
        pushButton_Admin->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 909, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuAdminfunctions = new QMenu(menu);
        menuAdminfunctions->setObjectName(QStringLiteral("menuAdminfunctions"));
        menuAdminfunctions->setEnabled(false);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_4);
        menu->addAction(action);
        menu->addAction(menuAdminfunctions->menuAction());
        menuAdminfunctions->addAction(action_7);
        menuAdminfunctions->addAction(action_8);
        menuAdminfunctions->addAction(action_9);
        menu_2->addAction(action_5);
        menu_2->addAction(action_3);
        menu_3->addAction(action_6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        action->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_3->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\210\320\270 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\321\213", nullptr));
#ifndef QT_NO_TOOLTIP
        action_3->setToolTip(QApplication::translate("MainWindow", "\320\235\320\260\321\210\320\270 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\321\213", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "\320\220\321\204\320\270\321\210\320\260", nullptr));
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        action_5->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\267\321\213\320\262\321\213", nullptr));
#ifndef QT_NO_SHORTCUT
        action_5->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        action_6->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\204\320\270\320\273\321\214\320\274\320\260", nullptr));
        action_8->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        action_9->setText(QApplication::translate("MainWindow", "\320\220\320\272\320\272\320\260\321\203\320\275\321\202\321\213 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\210\320\270 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\321\213", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\220\321\204\320\270\321\210\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        label->setText(QString());
        pushButton_Admin->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menuAdminfunctions->setTitle(QApplication::translate("MainWindow", "Adminfunctions", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\236 \320\275\320\260\321\201", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
