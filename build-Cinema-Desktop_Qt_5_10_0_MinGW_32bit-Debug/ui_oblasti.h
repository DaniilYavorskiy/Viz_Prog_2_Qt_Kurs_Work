/********************************************************************************
** Form generated from reading UI file 'oblasti.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBLASTI_H
#define UI_OBLASTI_H

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

class Ui_Oblasti
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Oblasti)
    {
        if (Oblasti->objectName().isEmpty())
            Oblasti->setObjectName(QStringLiteral("Oblasti"));
        Oblasti->resize(618, 385);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Oblasti->setWindowIcon(icon);
        textEdit = new QTextEdit(Oblasti);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 30, 421, 271));
        textEdit->setReadOnly(true);
        label = new QLabel(Oblasti);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 121, 191));
        label->setFrameShape(QFrame::Panel);
        pushButton = new QPushButton(Oblasti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 340, 121, 28));

        retranslateUi(Oblasti);

        QMetaObject::connectSlotsByName(Oblasti);
    } // setupUi

    void retranslateUi(QWidget *Oblasti)
    {
        Oblasti->setWindowTitle(QApplication::translate("Oblasti", "\320\236\320\261\320\273\320\260\321\201\321\202\320\270 \321\202\321\214\320\274\321\213", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Oblasti", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oblasti: public Ui_Oblasti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBLASTI_H
