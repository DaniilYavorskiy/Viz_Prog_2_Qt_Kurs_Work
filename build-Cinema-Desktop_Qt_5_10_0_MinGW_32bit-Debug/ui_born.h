/********************************************************************************
** Form generated from reading UI file 'born.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORN_H
#define UI_BORN_H

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

class Ui_Born
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Born)
    {
        if (Born->objectName().isEmpty())
            Born->setObjectName(QStringLiteral("Born"));
        Born->resize(635, 375);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Born->setWindowIcon(icon);
        textEdit = new QTextEdit(Born);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(190, 20, 421, 271));
        textEdit->setReadOnly(true);
        label = new QLabel(Born);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 191));
        label->setFrameShape(QFrame::Panel);
        pushButton = new QPushButton(Born);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 330, 121, 28));

        retranslateUi(Born);

        QMetaObject::connectSlotsByName(Born);
    } // setupUi

    void retranslateUi(QWidget *Born)
    {
        Born->setWindowTitle(QApplication::translate("Born", "\320\243\320\273\321\214\321\202\320\270\320\274\320\260\321\202\321\203\320\274 \320\221\320\276\321\200\320\275\320\260", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Born", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Born: public Ui_Born {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORN_H
