/********************************************************************************
** Form generated from reading UI file 'ford.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORD_H
#define UI_FORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ford
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_tickets;

    void setupUi(QWidget *Ford)
    {
        if (Ford->objectName().isEmpty())
            Ford->setObjectName(QStringLiteral("Ford"));
        Ford->resize(615, 357);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ford->setWindowIcon(icon);
        pushButton = new QPushButton(Ford);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 320, 131, 28));
        textEdit = new QTextEdit(Ford);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 10, 431, 291));
        textEdit->setReadOnly(true);
        widget = new QWidget(Ford);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 134, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../ford.jpg")));

        verticalLayout->addWidget(label);

        pushButton_tickets = new QPushButton(widget);
        pushButton_tickets->setObjectName(QStringLiteral("pushButton_tickets"));

        verticalLayout->addWidget(pushButton_tickets);


        retranslateUi(Ford);

        QMetaObject::connectSlotsByName(Ford);
    } // setupUi

    void retranslateUi(QWidget *Ford)
    {
        Ford->setWindowTitle(QApplication::translate("Ford", "\320\244\320\276\321\200\320\264 \320\277\321\200\320\276\321\202\320\270\320\262 \320\244\320\265\321\200\321\200\320\260\321\200\320\270", nullptr));
        pushButton->setText(QApplication::translate("Ford", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        textEdit->setHtml(QApplication::translate("Ford", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\270\320\273\321\214\320\274\320\260: </span><span style=\" font-size:9pt; font-style:italic;\">\320\244\320\276\321\200\320\264 \320\277\321\200\320\276\321\202\320\270\320\262 \320\244\320\265\321\200\321\200\320\260\321\200\320\270</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-st"
                        "yle:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">\320\222 \320\275\320\260\321\207\320\260\320\273\320\265 1960-\321\205 \320\223\320\265\320\275\321\200\320\270 \320\244\320\276\321\200\320\264 II \320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\321\202 \321\200\320\265\321\210\320\265\320\275\320\270\320\265 \321\203\320\273\321\203\321\207\321\210\320\270\321\202\321\214 \320\270\320\274\320\270\320\264\320\266 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270 \320\270 \321\201\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\321\203\321\200\321\201 \320\275"
                        "\320\260 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\261\320\276\320\273\320\265\320\265 \320\274\320\276\320\264\320\275\321\213\321\205 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\265\320\271. \320\237\320\276\321\201\320\273\320\265 \320\275\320\265\321\203\320\264\320\260\320\262\321\210\320\265\320\271\321\201\321\217 \320\277\320\276\320\277\321\213\321\202\320\272\320\270 \320\272\321\203\320\277\320\270\321\202\321\214 Ferrari \320\260\320\274\320\265\321\200\320\270\320\272\320\260\320\275\321\206\321\213 \321\200\320\265\321\210\320\260\321\216\321\202 \320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\262\321\213\320\267\320\276\320\262 \320\270\321\202\320\277\320\273\321\214\321\217\320\275\321\201\320\272\320\270\320\274 \320\272\320\276\320\275\320\272\321\203\321\200\320\265\320\275\321\202\320\260\320\274 \320\275\320\260 \321\202\321\200\320\260\321\201\321\201\320\265 \320\270 \320\262\321\213"
                        "\320\270\320\263\321\200\320\260\321\202\321\214 \320\263\320\276\320\275\320\272\321\203 24 \321\207\320\260\321\201\320\260 \320\233\320\265-\320\234\320\260\320\275\320\260. \320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217 \320\275\320\260\320\275\320\270\320\274\320\260\320\265\321\202 \320\260\320\262\321\202\320\276\320\272\320\276\320\275\321\201\321\202\321\200\321\203\320\272\321\202\320\276\321\200\320\260 \320\232\321\215\321\200\321\200\320\276\320\273\320\260 \320\250\320\265\320\273\320\261\320\270, \320\264\320\273\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\277\320\276\320\264\321\205\320\276\320\264\321\217\321\211\320\265\320\271 \320\274\320\260\321\210\320\270\320\275\321\213. \320\232 \320\250\320\265\320\273\320\261\320\270 \320\277\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\321\217\320\265\321\202\321\201\321\217 \320\263\320\276\320\275\321\211\320\270\320\272 \320\232\320\265\320\275 \320\234\320\260\320\271\320\273"
                        "\320\267, \320\262\320\274\320\265\321\201\321\202\320\265 \321\201 \320\272\320\276\321\202\320\276\321\200\321\213\320\274 \320\276\320\275\320\270 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\216\321\202\321\201\321\217 \320\267\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\321\203 \320\262\320\277\320\276\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\320\270 \320\267\320\275\320\260\320\274\320\265\320\275\320\270\321\202\320\276\320\263\320\276 \321\201\320\277\320\276\321\200\321\202\320\272\320\260\321\200\320\260 Ford GT40.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260: </span><span style=\" font-size:9pt; font-style:italic;\">2019</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \321\204\320\270\320\273\321\214\320\274\320\260:</span><span style=\" font-size:9pt; font-style:italic;\"> 8,2</span></p></body></html>", nullptr));
        label->setText(QString());
        pushButton_tickets->setText(QApplication::translate("Ford", "\320\221\320\270\320\273\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ford: public Ui_Ford {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORD_H
