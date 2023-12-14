/********************************************************************************
** Form generated from reading UI file 'legend.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGEND_H
#define UI_LEGEND_H

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

class Ui_Legend
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_tickets;

    void setupUi(QWidget *Legend)
    {
        if (Legend->objectName().isEmpty())
            Legend->setObjectName(QStringLiteral("Legend"));
        Legend->resize(551, 322);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/afisha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Legend->setWindowIcon(icon);
        pushButton = new QPushButton(Legend);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 270, 131, 28));
        textEdit = new QTextEdit(Legend);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(148, 10, 391, 241));
        textEdit->setReadOnly(true);
        widget = new QWidget(Legend);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 127, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../legend.jpg")));

        verticalLayout->addWidget(label);

        pushButton_tickets = new QPushButton(widget);
        pushButton_tickets->setObjectName(QStringLiteral("pushButton_tickets"));

        verticalLayout->addWidget(pushButton_tickets);


        retranslateUi(Legend);

        QMetaObject::connectSlotsByName(Legend);
    } // setupUi

    void retranslateUi(QWidget *Legend)
    {
        Legend->setWindowTitle(QApplication::translate("Legend", "\320\257 \320\273\320\265\320\263\320\265\320\275\320\264\320\260", nullptr));
        pushButton->setText(QApplication::translate("Legend", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        textEdit->setHtml(QApplication::translate("Legend", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\270\320\273\321\214\320\274\320\260: </span><span style=\" font-size:9pt; font-style:italic;\">\320\257 \320\273\320\265\320\263\320\265\320\275\320\264\320\260</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">\320\235\320\265\320\270\320\267\320\262\320\265\321\201\321\202\320\275\321\213\320\271 \320\262\320\270\321\200\321\203\321\201 \321\203\320\275\321\221\321\201 \320\266\320\270\320\267\320\275\320\270 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\321\213 \320\275\320\260\321\201\320\265\320\273\320\265\320\275\320\270\321\217 \320\267\320\265\320\274\320\275\320\276\320\263\320\276 \321\210\320\260\321\200\320\260, \320\260 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\203\321\216 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\321\203 \320\277\321\200\320\265\320\262\321\200\320\260"
                        "\321\202\320\270\320\273 \320\262 \320\262\320\260\320\274\320\277\320\270\321\200\320\276\320\262. \320\225\320\264\320\270\320\275\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \321\203\321\206\320\265\320\273\320\265\320\262\321\210\320\270\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\320\272 \321\201 \320\270\320\274\320\274\321\203\320\275\320\270\321\202\320\265\321\202\320\276\320\274 \320\272 \320\267\320\260\320\261\320\276\320\273\320\265\320\262\320\260\320\275\320\270\321\216 \320\275\320\276\321\207\320\260\320\274\320\270 \320\264\320\265\321\200\320\266\320\270\321\202 \320\276\321\201\320\260\320\264\321\203 \321\203\320\277\321\213\321\200\320\265\320\271, \320\260 \320\264\320\275\321\221\320\274 \320\277\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \320\275\320\260\320\271\321\202\320\270 \320\277\321\200\320\276\321\202\320\270\320\262\320\276\321\217\320\264\320\270\320\265 \320\270 \320\264\320\276\320\272\320\276\320\277\320\260\321\202\321\214\321"
                        "\201\321\217 \320\264\320\276 \320\277\321\200\320\270\321\207\320\270\320\275 \321\215\320\277\320\270\320\264\320\265\320\274\320\270\320\270.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260: </span><span style=\" font-size:9pt; font-style:italic;\">2007</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \321\204\320\270\320\273\321\214\320\274\320\260:</span><span style=\" font-size:9pt; font-style:italic;\"> 7,9</span></p></body></html>", nullptr));
        label->setText(QString());
        pushButton_tickets->setText(QApplication::translate("Legend", "\320\221\320\270\320\273\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Legend: public Ui_Legend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGEND_H
