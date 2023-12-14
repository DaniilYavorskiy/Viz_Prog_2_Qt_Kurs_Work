/********************************************************************************
** Form generated from reading UI file 'ourcinema.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OURCINEMA_H
#define UI_OURCINEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OurCinema
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *OurCinema)
    {
        if (OurCinema->objectName().isEmpty())
            OurCinema->setObjectName(QStringLiteral("OurCinema"));
        OurCinema->resize(569, 420);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/cinema.png"), QSize(), QIcon::Normal, QIcon::Off);
        OurCinema->setWindowIcon(icon);
        pushButton = new QPushButton(OurCinema);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 380, 131, 28));
        layoutWidget = new QWidget(OurCinema);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 521, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(OurCinema);

        QMetaObject::connectSlotsByName(OurCinema);
    } // setupUi

    void retranslateUi(QWidget *OurCinema)
    {
        OurCinema->setWindowTitle(QApplication::translate("OurCinema", "\320\235\320\260\321\210\320\270 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\321\213", nullptr));
        pushButton->setText(QApplication::translate("OurCinema", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("OurCinema", "                           \320\220\320\264\321\200\320\265\321\201\320\260 \320\275\320\260\321\210\320\270\321\205 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\276\320\262", nullptr));
        label_2->setText(QApplication::translate("OurCinema", "             \320\220 \321\202\320\260\320\272\320\266\320\265 \320\277\320\270\321\210\320\270\321\202\320\265 \320\275\320\260 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\203\321\216 \320\277\320\276\321\207\321\202\321\203: ", nullptr));
        label_3->setText(QApplication::translate("OurCinema", "                             4DCimema@gmail.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OurCinema: public Ui_OurCinema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OURCINEMA_H
