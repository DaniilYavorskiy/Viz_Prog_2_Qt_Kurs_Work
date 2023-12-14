/********************************************************************************
** Form generated from reading UI file 'accountinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFO_H
#define UI_ACCOUNTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accountinfo
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_load_tab;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_name;
    QLineEdit *txt_surname;
    QLineEdit *txt_date;
    QLineEdit *txt_username;
    QLineEdit *txt_userpassword;
    QLineEdit *txt_film;
    QLineEdit *txt_places;
    QLineEdit *txt_dat;
    QLineEdit *txt_time;

    void setupUi(QDialog *Accountinfo)
    {
        if (Accountinfo->objectName().isEmpty())
            Accountinfo->setObjectName(QStringLiteral("Accountinfo"));
        Accountinfo->resize(604, 462);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        Accountinfo->setWindowIcon(icon);
        label = new QLabel(Accountinfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 271, 31));
        pushButton_2 = new QPushButton(Accountinfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 420, 93, 28));
        layoutWidget = new QWidget(Accountinfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 380, 401, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Save = new QPushButton(layoutWidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));

        horizontalLayout->addWidget(pushButton_Save);

        pushButton_Edit = new QPushButton(layoutWidget);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));

        horizontalLayout->addWidget(pushButton_Edit);

        pushButton_Delete = new QPushButton(layoutWidget);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));

        horizontalLayout->addWidget(pushButton_Delete);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        comboBox = new QComboBox(Accountinfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(450, 90, 131, 21));
        pushButton_load_tab = new QPushButton(Accountinfo);
        pushButton_load_tab->setObjectName(QStringLiteral("pushButton_load_tab"));
        pushButton_load_tab->setGeometry(QRect(470, 250, 93, 28));
        layoutWidget_2 = new QWidget(Accountinfo);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 80, 201, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        layoutWidget_3 = new QWidget(Accountinfo);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(260, 80, 151, 271));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_name = new QLineEdit(layoutWidget_3);
        txt_name->setObjectName(QStringLiteral("txt_name"));

        verticalLayout->addWidget(txt_name);

        txt_surname = new QLineEdit(layoutWidget_3);
        txt_surname->setObjectName(QStringLiteral("txt_surname"));

        verticalLayout->addWidget(txt_surname);

        txt_date = new QLineEdit(layoutWidget_3);
        txt_date->setObjectName(QStringLiteral("txt_date"));
        txt_date->setReadOnly(false);

        verticalLayout->addWidget(txt_date);

        txt_username = new QLineEdit(layoutWidget_3);
        txt_username->setObjectName(QStringLiteral("txt_username"));

        verticalLayout->addWidget(txt_username);

        txt_userpassword = new QLineEdit(layoutWidget_3);
        txt_userpassword->setObjectName(QStringLiteral("txt_userpassword"));

        verticalLayout->addWidget(txt_userpassword);

        txt_film = new QLineEdit(layoutWidget_3);
        txt_film->setObjectName(QStringLiteral("txt_film"));
        txt_film->setReadOnly(false);

        verticalLayout->addWidget(txt_film);

        txt_places = new QLineEdit(layoutWidget_3);
        txt_places->setObjectName(QStringLiteral("txt_places"));
        txt_places->setReadOnly(false);

        verticalLayout->addWidget(txt_places);

        txt_dat = new QLineEdit(layoutWidget_3);
        txt_dat->setObjectName(QStringLiteral("txt_dat"));
        txt_dat->setReadOnly(false);

        verticalLayout->addWidget(txt_dat);

        txt_time = new QLineEdit(layoutWidget_3);
        txt_time->setObjectName(QStringLiteral("txt_time"));
        txt_time->setReadOnly(false);

        verticalLayout->addWidget(txt_time);


        retranslateUi(Accountinfo);

        QMetaObject::connectSlotsByName(Accountinfo);
    } // setupUi

    void retranslateUi(QDialog *Accountinfo)
    {
        Accountinfo->setWindowTitle(QApplication::translate("Accountinfo", "\320\220\320\272\320\272\320\260\321\203\320\275\321\202 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QApplication::translate("Accountinfo", "\320\220\320\272\320\272\320\260\321\203\320\275\321\202 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_2->setText(QApplication::translate("Accountinfo", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_Save->setText(QApplication::translate("Accountinfo", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_Edit->setText(QApplication::translate("Accountinfo", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_Delete->setText(QApplication::translate("Accountinfo", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("Accountinfo", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_load_tab->setText(QApplication::translate("Accountinfo", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("Accountinfo", "                                \320\230\320\274\321\217", nullptr));
        label_3->setText(QApplication::translate("Accountinfo", "                       \320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("Accountinfo", "           \320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QApplication::translate("Accountinfo", "     \320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_6->setText(QApplication::translate("Accountinfo", "                          \320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_7->setText(QApplication::translate("Accountinfo", "                          \320\244\320\270\320\273\321\214\320\274", nullptr));
        label_8->setText(QApplication::translate("Accountinfo", "                          \320\234\320\265\321\201\321\202\320\260", nullptr));
        label_10->setText(QApplication::translate("Accountinfo", "                          \320\224\320\260\321\202\320\260", nullptr));
        label_9->setText(QApplication::translate("Accountinfo", "                          \320\222\321\200\320\265\320\274\321\217", nullptr));
        txt_userpassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Accountinfo: public Ui_Accountinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFO_H
