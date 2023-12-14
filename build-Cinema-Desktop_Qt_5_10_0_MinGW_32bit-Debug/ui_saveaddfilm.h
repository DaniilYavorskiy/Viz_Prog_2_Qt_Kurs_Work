/********************************************************************************
** Form generated from reading UI file 'saveaddfilm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEADDFILM_H
#define UI_SAVEADDFILM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveaddFilm
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SaveaddFilm)
    {
        if (SaveaddFilm->objectName().isEmpty())
            SaveaddFilm->setObjectName(QStringLiteral("SaveaddFilm"));
        SaveaddFilm->resize(681, 533);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/inkognito.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SaveaddFilm->setWindowIcon(icon);
        textEdit = new QTextEdit(SaveaddFilm);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 20, 401, 431));
        label = new QLabel(SaveaddFilm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 121, 191));
        label->setFrameShape(QFrame::Panel);
        widget = new QWidget(SaveaddFilm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 480, 221, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(SaveaddFilm);

        QMetaObject::connectSlotsByName(SaveaddFilm);
    } // setupUi

    void retranslateUi(QWidget *SaveaddFilm)
    {
        SaveaddFilm->setWindowTitle(QApplication::translate("SaveaddFilm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\204\320\270\320\273\321\214\320\274\320\260", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("SaveaddFilm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("SaveaddFilm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveaddFilm: public Ui_SaveaddFilm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEADDFILM_H
