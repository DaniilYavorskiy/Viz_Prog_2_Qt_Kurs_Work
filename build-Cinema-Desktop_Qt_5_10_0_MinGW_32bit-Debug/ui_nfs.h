/********************************************************************************
** Form generated from reading UI file 'nfs.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFS_H
#define UI_NFS_H

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

class Ui_Nfs
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Nfs)
    {
        if (Nfs->objectName().isEmpty())
            Nfs->setObjectName(QStringLiteral("Nfs"));
        Nfs->resize(623, 392);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Nfs->setWindowIcon(icon);
        textEdit = new QTextEdit(Nfs);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 30, 421, 271));
        textEdit->setReadOnly(true);
        label = new QLabel(Nfs);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 121, 191));
        label->setFrameShape(QFrame::Panel);
        pushButton = new QPushButton(Nfs);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 350, 121, 28));

        retranslateUi(Nfs);

        QMetaObject::connectSlotsByName(Nfs);
    } // setupUi

    void retranslateUi(QWidget *Nfs)
    {
        Nfs->setWindowTitle(QApplication::translate("Nfs", "Need For Speed: \320\226\320\260\320\266\320\264\320\260 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Nfs", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nfs: public Ui_Nfs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFS_H
