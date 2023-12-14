/********************************************************************************
** Form generated from reading UI file 'begyshiy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGYSHIY_H
#define UI_BEGYSHIY_H

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

class Ui_Begyshiy
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_tickets;

    void setupUi(QWidget *Begyshiy)
    {
        if (Begyshiy->objectName().isEmpty())
            Begyshiy->setObjectName(QStringLiteral("Begyshiy"));
        Begyshiy->resize(585, 360);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Begyshiy->setWindowIcon(icon);
        Begyshiy->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(Begyshiy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 320, 131, 28));
        textEdit = new QTextEdit(Begyshiy);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 10, 431, 271));
        textEdit->setReadOnly(true);
        layoutWidget = new QWidget(Begyshiy);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 127, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../beguchiy.jpg")));

        verticalLayout->addWidget(label);

        pushButton_tickets = new QPushButton(layoutWidget);
        pushButton_tickets->setObjectName(QStringLiteral("pushButton_tickets"));

        verticalLayout->addWidget(pushButton_tickets);


        retranslateUi(Begyshiy);

        QMetaObject::connectSlotsByName(Begyshiy);
    } // setupUi

    void retranslateUi(QWidget *Begyshiy)
    {
        Begyshiy->setWindowTitle(QApplication::translate("Begyshiy", "\320\221\320\265\320\263\321\203\321\211\320\270\320\271 \320\262 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202\320\265", nullptr));
        pushButton->setText(QApplication::translate("Begyshiy", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        textEdit->setHtml(QApplication::translate("Begyshiy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\270\320\273\321\214\320\274\320\260</span><span style=\" font-size:9pt; font-style:italic;\">: \320\221\320\265\320\263\321\203\321\211\320\270\320\271 \320\262 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202\320\265 </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-s"
                        "tyle:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">\320\223\320\264\320\260\320\262\320\275\321\213\320\271 \320\263\320\265\321\200\320\276\320\271 - \320\277\320\276\320\264\321\200\320\276\321\201\321\202\320\276\320\272 \320\242\320\276\320\274\320\260\321\201, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\321\200\320\276\321\201\321\213\320\277\320\260\320\265\321\202\321\201\321\217 \320\262 \320\273\320\270\321\204\321\202\320\265, \320\275\320\276 \320\275\320\270\321\207\320\265\320\263\320\276 \320\275\320\265 \320\277\320\276\320\274\320\275\320\270\321\202, \320\272"
                        "\321\200\320\276\320\274\320\265 \321\201\320\262\320\276\320\265\320\263\320\276 \320\270\320\274\320\265\320\275\320\270. \320\236\320\275 \320\276\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \321\201\321\200\320\265\320\264\320\270 \320\264\321\200\321\203\320\263\320\270\321\205 \320\277\320\276\320\264\321\200\320\276\321\201\321\202\320\272\320\276\320\262, \320\275\320\260\321\203\321\207\320\270\320\262\321\210\320\270\321\205\321\201\321\217 \320\262\321\213\320\266\320\270\320\262\320\260\321\202\321\214 \320\262 \320\267\320\260\320\274\320\272\320\275\321\203\321\202\320\276\320\274 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265. \320\240\320\260\320\267 \320\262 30 \320\264\320\275\320\265\320\271 \320\277\321\200\320\270\320\261\321\213\320\262\320\260\320\265\321\202 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\265\320\275\321\214. \320\223\321\200\321\203\320\277\320\277\320\260 \321\200"
                        "\320\265\320\261\321\217\321\202 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\265\321\202 \320\262 &quot;\320\237\321\200\320\270\321\216\321\202\320\265&quot; \321\203\320\266\320\265 3 \320\263\320\276\320\264\320\260. \320\236\320\275\320\270 \320\265\320\264\321\217\321\202 \321\202\320\276, \321\207\321\202\320\276 \321\203\320\264\320\260\320\265\321\202\321\201\321\217 \320\262\321\213\321\200\320\260\321\201\321\202\320\270\321\202\321\214 \320\275\320\260 \320\267\320\265\320\274\320\273\320\265, \320\270 \320\277\321\213\321\202\320\260\321\216\321\202\321\201\321\217 \320\275\320\260\320\271\321\202\320\270 \320\262\321\213\321\205\320\276\320\264 \320\270\320\267 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\223\320\276\320\264 \320\262\321\213\320\277"
                        "\321\203\321\201\320\272\320\260:</span><span style=\" font-size:9pt; font-style:italic;\"> 2014</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \321\204\320\270\320\273\321\214\320\274\320\260:</span><span style=\" font-size:9pt; font-style:italic;\"> 6,8</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-style:italic;\"><br /></p></body></html>", nullptr));
        label->setText(QString());
        pushButton_tickets->setText(QApplication::translate("Begyshiy", "\320\221\320\270\320\273\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Begyshiy: public Ui_Begyshiy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGYSHIY_H
