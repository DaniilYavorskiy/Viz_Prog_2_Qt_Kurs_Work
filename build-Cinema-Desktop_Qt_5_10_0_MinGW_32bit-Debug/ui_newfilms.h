/********************************************************************************
** Form generated from reading UI file 'newfilms.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILMS_H
#define UI_NEWFILMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFilms
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QFrame *line;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_2;

    void setupUi(QWidget *NewFilms)
    {
        if (NewFilms->objectName().isEmpty())
            NewFilms->setObjectName(QStringLiteral("NewFilms"));
        NewFilms->resize(897, 423);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/cinema.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewFilms->setWindowIcon(icon);
        pushButton = new QPushButton(NewFilms);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 370, 131, 28));
        label = new QLabel(NewFilms);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 40, 151, 16));
        layoutWidget = new QWidget(NewFilms);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 901, 277));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../lifePi.jpg")));

        horizontalLayout->addWidget(label_8);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../oblasti.jpg")));

        horizontalLayout->addWidget(label_11);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../nfs.jpg")));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../galaxy.jpg")));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../born.jpg")));

        horizontalLayout->addWidget(label_4);

        pushButton_6 = new QPushButton(NewFilms);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(760, 310, 93, 28));
        pushButton_5 = new QPushButton(NewFilms);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(580, 310, 93, 28));
        pushButton_3 = new QPushButton(NewFilms);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 310, 93, 28));
        line = new QFrame(NewFilms);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 80, 851, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_4 = new QPushButton(NewFilms);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 310, 93, 28));
        pushButton_2 = new QPushButton(NewFilms);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 310, 93, 28));
        line_3 = new QFrame(NewFilms);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(160, 90, 20, 261));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(NewFilms);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(340, 90, 20, 261));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(NewFilms);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(530, 90, 20, 261));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(NewFilms);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(710, 90, 20, 261));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(NewFilms);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 340, 851, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(NewFilms);

        QMetaObject::connectSlotsByName(NewFilms);
    } // setupUi

    void retranslateUi(QWidget *NewFilms)
    {
        NewFilms->setWindowTitle(QApplication::translate("NewFilms", "\320\235\320\276\320\262\321\213\320\265 \321\204\320\270\320\273\321\214\320\274\321\213 \321\203\320\266\320\265 \320\262 \320\277\321\200\320\276\320\272\320\260\321\202\320\265!", nullptr));
        pushButton->setText(QApplication::translate("NewFilms", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("NewFilms", "\320\235\320\276\320\262\320\270\320\275\320\272\320\270:", nullptr));
        label_8->setText(QString());
        label_11->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_6->setText(QApplication::translate("NewFilms", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        pushButton_5->setText(QApplication::translate("NewFilms", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        pushButton_3->setText(QApplication::translate("NewFilms", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        pushButton_4->setText(QApplication::translate("NewFilms", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        pushButton_2->setText(QApplication::translate("NewFilms", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFilms: public Ui_NewFilms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILMS_H
