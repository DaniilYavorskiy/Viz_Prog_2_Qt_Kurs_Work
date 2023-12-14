/********************************************************************************
** Form generated from reading UI file 'accountinfouser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFOUSER_H
#define UI_ACCOUNTINFOUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountinfoUser
{
public:
    QWidget *layoutWidget;
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
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_2;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *AccountinfoUser)
    {
        if (AccountinfoUser->objectName().isEmpty())
            AccountinfoUser->setObjectName(QStringLiteral("AccountinfoUser"));
        AccountinfoUser->resize(567, 435);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        AccountinfoUser->setWindowIcon(icon);
        layoutWidget = new QWidget(AccountinfoUser);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 60, 151, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_name = new QLineEdit(layoutWidget);
        txt_name->setObjectName(QStringLiteral("txt_name"));

        verticalLayout->addWidget(txt_name);

        txt_surname = new QLineEdit(layoutWidget);
        txt_surname->setObjectName(QStringLiteral("txt_surname"));

        verticalLayout->addWidget(txt_surname);

        txt_date = new QLineEdit(layoutWidget);
        txt_date->setObjectName(QStringLiteral("txt_date"));

        verticalLayout->addWidget(txt_date);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName(QStringLiteral("txt_username"));

        verticalLayout->addWidget(txt_username);

        txt_userpassword = new QLineEdit(layoutWidget);
        txt_userpassword->setObjectName(QStringLiteral("txt_userpassword"));

        verticalLayout->addWidget(txt_userpassword);

        txt_film = new QLineEdit(layoutWidget);
        txt_film->setObjectName(QStringLiteral("txt_film"));
        txt_film->setReadOnly(true);

        verticalLayout->addWidget(txt_film);

        txt_places = new QLineEdit(layoutWidget);
        txt_places->setObjectName(QStringLiteral("txt_places"));
        txt_places->setReadOnly(true);

        verticalLayout->addWidget(txt_places);

        txt_dat = new QLineEdit(layoutWidget);
        txt_dat->setObjectName(QStringLiteral("txt_dat"));
        txt_dat->setReadOnly(true);

        verticalLayout->addWidget(txt_dat);

        txt_time = new QLineEdit(layoutWidget);
        txt_time->setObjectName(QStringLiteral("txt_time"));
        txt_time->setReadOnly(true);

        verticalLayout->addWidget(txt_time);

        pushButton_load_tab = new QPushButton(AccountinfoUser);
        pushButton_load_tab->setObjectName(QStringLiteral("pushButton_load_tab"));
        pushButton_load_tab->setGeometry(QRect(440, 230, 93, 28));
        layoutWidget_2 = new QWidget(AccountinfoUser);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 60, 201, 261));
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

        layoutWidget_3 = new QWidget(AccountinfoUser);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(150, 380, 295, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Edit = new QPushButton(layoutWidget_3);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));

        horizontalLayout->addWidget(pushButton_Edit);

        pushButton_Delete = new QPushButton(layoutWidget_3);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));

        horizontalLayout->addWidget(pushButton_Delete);

        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(AccountinfoUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 271, 31));
        comboBox = new QComboBox(AccountinfoUser);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(420, 70, 131, 21));

        retranslateUi(AccountinfoUser);

        QMetaObject::connectSlotsByName(AccountinfoUser);
    } // setupUi

    void retranslateUi(QWidget *AccountinfoUser)
    {
        AccountinfoUser->setWindowTitle(QApplication::translate("AccountinfoUser", "\320\234\320\276\320\271 \320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        txt_userpassword->setText(QString());
        pushButton_load_tab->setText(QApplication::translate("AccountinfoUser", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("AccountinfoUser", "                                \320\230\320\274\321\217", nullptr));
        label_3->setText(QApplication::translate("AccountinfoUser", "                       \320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("AccountinfoUser", "           \320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QApplication::translate("AccountinfoUser", "     \320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_6->setText(QApplication::translate("AccountinfoUser", "                          \320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_7->setText(QApplication::translate("AccountinfoUser", "                          \320\244\320\270\320\273\321\214\320\274", nullptr));
        label_8->setText(QApplication::translate("AccountinfoUser", "                          \320\234\320\265\321\201\321\202\320\260", nullptr));
        label_10->setText(QApplication::translate("AccountinfoUser", "                          \320\224\320\260\321\202\320\260", nullptr));
        label_9->setText(QApplication::translate("AccountinfoUser", "                          \320\222\321\200\320\265\320\274\321\217", nullptr));
        pushButton_Edit->setText(QApplication::translate("AccountinfoUser", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_Delete->setText(QApplication::translate("AccountinfoUser", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("AccountinfoUser", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("AccountinfoUser", "\320\234\320\276\320\271 \320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountinfoUser: public Ui_AccountinfoUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFOUSER_H
