/********************************************************************************
** Form generated from reading UI file 'tickets.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETS_H
#define UI_TICKETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tickets
{
public:
    QLabel *label;
    QComboBox *comboBox_Date;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QComboBox *comboBox_Time;
    QComboBox *comboBox_Film;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txt_surname;
    QLineEdit *txt_places;

    void setupUi(QWidget *Tickets)
    {
        if (Tickets->objectName().isEmpty())
            Tickets->setObjectName(QStringLiteral("Tickets"));
        Tickets->resize(686, 484);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tickets->setWindowIcon(icon);
        label = new QLabel(Tickets);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 621, 81));
        comboBox_Date = new QComboBox(Tickets);
        comboBox_Date->setObjectName(QStringLiteral("comboBox_Date"));
        comboBox_Date->setGeometry(QRect(230, 120, 111, 21));
        layoutWidget = new QWidget(Tickets);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 420, 308, 65));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        comboBox_Time = new QComboBox(Tickets);
        comboBox_Time->setObjectName(QStringLiteral("comboBox_Time"));
        comboBox_Time->setGeometry(QRect(370, 120, 81, 21));
        comboBox_Film = new QComboBox(Tickets);
        comboBox_Film->setObjectName(QStringLiteral("comboBox_Film"));
        comboBox_Film->setGeometry(QRect(260, 80, 161, 22));
        layoutWidget1 = new QWidget(Tickets);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 350, 181, 51));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget2 = new QWidget(Tickets);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(360, 350, 139, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txt_surname = new QLineEdit(layoutWidget2);
        txt_surname->setObjectName(QStringLiteral("txt_surname"));

        verticalLayout_2->addWidget(txt_surname);

        txt_places = new QLineEdit(layoutWidget2);
        txt_places->setObjectName(QStringLiteral("txt_places"));
        txt_places->setReadOnly(true);

        verticalLayout_2->addWidget(txt_places);


        retranslateUi(Tickets);

        QMetaObject::connectSlotsByName(Tickets);
    } // setupUi

    void retranslateUi(QWidget *Tickets)
    {
        Tickets->setWindowTitle(QApplication::translate("Tickets", "\320\221\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\261\320\270\320\273\320\265\321\202\320\276\320\262", nullptr));
        label->setText(QApplication::translate("Tickets", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\275\321\202\320\265\321\200\320\265\321\201\321\203\321\216\321\211\320\270\320\271 \320\262\320\260\321\201 \321\204\320\270\320\273\321\214\320\274, \320\264\320\260\321\202\321\203 \320\270 \320\262\321\200\320\265\320\274\321\217 \321\201\320\265\320\260\320\275\321\201\320\260:", nullptr));
        pushButton_2->setText(QApplication::translate("Tickets", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("Tickets", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_3->setText(QApplication::translate("Tickets", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        comboBox_Film->setCurrentText(QString());
        label_2->setText(QApplication::translate("Tickets", "\320\222\320\260\321\210\320\260 \321\204\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QApplication::translate("Tickets", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\265 \320\274\320\265\321\201\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tickets: public Ui_Tickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETS_H
