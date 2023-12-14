/********************************************************************************
** Form generated from reading UI file 'lifepi.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIFEPI_H
#define UI_LIFEPI_H

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

class Ui_Lifepi
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Lifepi)
    {
        if (Lifepi->objectName().isEmpty())
            Lifepi->setObjectName(QStringLiteral("Lifepi"));
        Lifepi->resize(673, 381);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lifepi->setWindowIcon(icon);
        textEdit = new QTextEdit(Lifepi);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(210, 10, 421, 271));
        textEdit->setReadOnly(true);
        label = new QLabel(Lifepi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 121, 191));
        label->setFrameShape(QFrame::Panel);
        pushButton = new QPushButton(Lifepi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 320, 121, 28));

        retranslateUi(Lifepi);

        QMetaObject::connectSlotsByName(Lifepi);
    } // setupUi

    void retranslateUi(QWidget *Lifepi)
    {
        Lifepi->setWindowTitle(QApplication::translate("Lifepi", "\320\226\320\270\320\267\320\275\321\214 \320\237\320\270", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Lifepi", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lifepi: public Ui_Lifepi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIFEPI_H
