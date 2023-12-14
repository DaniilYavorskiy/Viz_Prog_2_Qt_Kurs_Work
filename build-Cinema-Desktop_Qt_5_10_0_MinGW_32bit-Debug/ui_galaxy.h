/********************************************************************************
** Form generated from reading UI file 'galaxy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GALAXY_H
#define UI_GALAXY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Galaxy
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Galaxy)
    {
        if (Galaxy->objectName().isEmpty())
            Galaxy->setObjectName(QStringLiteral("Galaxy"));
        Galaxy->resize(627, 398);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Galaxy->setWindowIcon(icon);
        textEdit = new QTextEdit(Galaxy);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 20, 421, 271));
        textEdit->setReadOnly(true);
        label = new QLabel(Galaxy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 191));
        label->setFrameShape(QFrame::Panel);
        pushButton = new QPushButton(Galaxy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 350, 121, 28));

        retranslateUi(Galaxy);

        QMetaObject::connectSlotsByName(Galaxy);
    } // setupUi

    void retranslateUi(QWidget *Galaxy)
    {
        Galaxy->setWindowTitle(QApplication::translate("Galaxy", "\320\241\321\202\321\200\320\260\320\266\320\270 \320\263\320\260\320\273\320\260\320\272\321\202\320\270\320\272\320\270", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Galaxy", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Galaxy: public Ui_Galaxy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALAXY_H
