/********************************************************************************
** Form generated from reading UI file 'addfilm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILM_H
#define UI_ADDFILM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFilm
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_clear;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *afisha;
    QPushButton *Load;
    QLabel *label_6;
    QTextEdit *Opisanie;
    QLabel *label_4;
    QLineEdit *Rating;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *line_5;
    QLineEdit *Year;
    QLineEdit *NameofFilm;
    QLineEdit *afishapath;

    void setupUi(QWidget *AddFilm)
    {
        if (AddFilm->objectName().isEmpty())
            AddFilm->setObjectName(QStringLiteral("AddFilm"));
        AddFilm->resize(695, 468);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddFilm->setWindowIcon(icon);
        label = new QLabel(AddFilm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 281, 21));
        layoutWidget = new QWidget(AddFilm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 420, 461, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Add = new QPushButton(layoutWidget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));

        horizontalLayout->addWidget(pushButton_Add);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout->addWidget(pushButton_clear);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        afisha = new QLabel(AddFilm);
        afisha->setObjectName(QStringLiteral("afisha"));
        afisha->setGeometry(QRect(40, 50, 121, 191));
        afisha->setFrameShape(QFrame::Panel);
        Load = new QPushButton(AddFilm);
        Load->setObjectName(QStringLiteral("Load"));
        Load->setGeometry(QRect(50, 280, 93, 28));
        label_6 = new QLabel(AddFilm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 50, 451, 321));
        label_6->setFrameShape(QFrame::Panel);
        Opisanie = new QTextEdit(AddFilm);
        Opisanie->setObjectName(QStringLiteral("Opisanie"));
        Opisanie->setGeometry(QRect(360, 110, 281, 171));
        label_4 = new QLabel(AddFilm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(460, 320, 101, 16));
        Rating = new QLineEdit(AddFilm);
        Rating->setObjectName(QStringLiteral("Rating"));
        Rating->setGeometry(QRect(560, 320, 71, 21));
        line_3 = new QFrame(AddFilm);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(420, 300, 20, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(AddFilm);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(220, 90, 431, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(AddFilm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 310, 51, 31));
        label_3 = new QLabel(AddFilm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 140, 111, 16));
        label_2 = new QLabel(AddFilm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 70, 121, 16));
        line_5 = new QFrame(AddFilm);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(220, 290, 431, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        Year = new QLineEdit(AddFilm);
        Year->setObjectName(QStringLiteral("Year"));
        Year->setGeometry(QRect(310, 320, 71, 21));
        NameofFilm = new QLineEdit(AddFilm);
        NameofFilm->setObjectName(QStringLiteral("NameofFilm"));
        NameofFilm->setGeometry(QRect(360, 70, 281, 21));
        afishapath = new QLineEdit(AddFilm);
        afishapath->setObjectName(QStringLiteral("afishapath"));
        afishapath->setGeometry(QRect(40, 250, 121, 22));
        afishapath->setDragEnabled(false);

        retranslateUi(AddFilm);

        QMetaObject::connectSlotsByName(AddFilm);
    } // setupUi

    void retranslateUi(QWidget *AddFilm)
    {
        AddFilm->setWindowTitle(QApplication::translate("AddFilm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\270\320\275\320\272\320\270", nullptr));
        label->setText(QApplication::translate("AddFilm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\204\320\270\320\273\321\214\320\274\320\260:", nullptr));
        pushButton_Add->setText(QApplication::translate("AddFilm", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        pushButton_clear->setText(QApplication::translate("AddFilm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("AddFilm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_3->setText(QApplication::translate("AddFilm", "\320\235\320\276\320\262\320\270\320\275\320\272\320\270", nullptr));
        afisha->setText(QApplication::translate("AddFilm", "  \320\236\320\261\320\273\320\276\320\266\320\272\320\260", nullptr));
        Load->setText(QApplication::translate("AddFilm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_6->setText(QString());
        label_4->setText(QApplication::translate("AddFilm", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", nullptr));
        label_5->setText(QApplication::translate("AddFilm", "\320\223\320\276\320\264", nullptr));
        label_3->setText(QApplication::translate("AddFilm", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("AddFilm", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFilm: public Ui_AddFilm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILM_H
