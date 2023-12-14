/********************************************************************************
** Form generated from reading UI file 'bookingplaces.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGPLACES_H
#define UI_BOOKINGPLACES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookingPlaces
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QWidget *BookingPlaces)
    {
        if (BookingPlaces->objectName().isEmpty())
            BookingPlaces->setObjectName(QStringLiteral("BookingPlaces"));
        BookingPlaces->resize(724, 474);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/cinema.png"), QSize(), QIcon::Normal, QIcon::Off);
        BookingPlaces->setWindowIcon(icon);
        pushButton = new QPushButton(BookingPlaces);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 430, 131, 28));
        tableView = new QTableView(BookingPlaces);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 50, 651, 361));
        label = new QLabel(BookingPlaces);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 10, 341, 31));

        retranslateUi(BookingPlaces);

        QMetaObject::connectSlotsByName(BookingPlaces);
    } // setupUi

    void retranslateUi(QWidget *BookingPlaces)
    {
        BookingPlaces->setWindowTitle(QApplication::translate("BookingPlaces", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        pushButton->setText(QApplication::translate("BookingPlaces", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("BookingPlaces", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookingPlaces: public Ui_BookingPlaces {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGPLACES_H
