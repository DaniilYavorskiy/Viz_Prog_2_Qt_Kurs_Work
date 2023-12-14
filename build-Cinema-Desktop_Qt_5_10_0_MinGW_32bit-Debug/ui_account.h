/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Account
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_pic;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_vhod;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_registration;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *txt_surname_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *txt_name_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLineEdit *txt_username_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_16;
    QLineEdit *txt_userpassword_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDateEdit *txt_date_3;

    void setupUi(QWidget *Account)
    {
        if (Account->objectName().isEmpty())
            Account->setObjectName(QStringLiteral("Account"));
        Account->resize(732, 481);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        Account->setWindowIcon(icon);
        pushButton = new QPushButton(Account);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 440, 131, 28));
        label = new QLabel(Account);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 211, 16));
        label_pic = new QLabel(Account);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(110, 60, 131, 121));
        horizontalLayoutWidget = new QWidget(Account);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 210, 251, 141));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        pushButton_vhod = new QPushButton(groupBox);
        pushButton_vhod->setObjectName(QStringLiteral("pushButton_vhod"));
        pushButton_vhod->setGeometry(QRect(70, 100, 101, 31));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 221, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 221, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Password = new QLineEdit(layoutWidget1);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayoutWidget = new QWidget(Account);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(410, 120, 281, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        pushButton_registration = new QPushButton(groupBox_2);
        pushButton_registration->setObjectName(QStringLiteral("pushButton_registration"));
        pushButton_registration->setGeometry(QRect(70, 190, 141, 31));
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 60, 241, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        txt_surname_2 = new QLineEdit(layoutWidget_4);
        txt_surname_2->setObjectName(QStringLiteral("txt_surname_2"));

        horizontalLayout_5->addWidget(txt_surname_2);

        layoutWidget_5 = new QWidget(groupBox_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 30, 241, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        txt_name_2 = new QLineEdit(layoutWidget_5);
        txt_name_2->setObjectName(QStringLiteral("txt_name_2"));

        horizontalLayout_7->addWidget(txt_name_2);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 120, 241, 24));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_13->addWidget(label_15);

        txt_username_2 = new QLineEdit(layoutWidget_2);
        txt_username_2->setObjectName(QStringLiteral("txt_username_2"));

        horizontalLayout_13->addWidget(txt_username_2);

        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 150, 241, 24));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_14->addWidget(label_16);

        txt_userpassword_2 = new QLineEdit(layoutWidget_3);
        txt_userpassword_2->setObjectName(QStringLiteral("txt_userpassword_2"));
        txt_userpassword_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_14->addWidget(txt_userpassword_2);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 90, 241, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        txt_date_3 = new QDateEdit(layoutWidget2);
        txt_date_3->setObjectName(QStringLiteral("txt_date_3"));

        horizontalLayout_6->addWidget(txt_date_3);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Account);

        QMetaObject::connectSlotsByName(Account);
    } // setupUi

    void retranslateUi(QWidget *Account)
    {
        Account->setWindowTitle(QApplication::translate("Account", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        pushButton->setText(QApplication::translate("Account", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("Account", "\320\234\320\276\320\271 \320\273\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        label_pic->setText(QString());
        groupBox->setTitle(QApplication::translate("Account", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \320\262\321\205\320\276\320\264\320\260", nullptr));
        pushButton_vhod->setText(QApplication::translate("Account", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_2->setText(QApplication::translate("Account", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QApplication::translate("Account", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("Account", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        pushButton_registration->setText(QApplication::translate("Account", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_7->setText(QApplication::translate("Account", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_9->setText(QApplication::translate("Account", "\320\230\320\274\321\217", nullptr));
        label_15->setText(QApplication::translate("Account", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_16->setText(QApplication::translate("Account", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_8->setText(QApplication::translate("Account", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Account: public Ui_Account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
