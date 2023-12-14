/********************************************************************************
** Form generated from reading UI file 'comments.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTS_H
#define UI_COMMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comments
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLabel *label_5;
    QTextEdit *textEdit_4;
    QLabel *label_2;
    QTextEdit *textEdit_5;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Comments)
    {
        if (Comments->objectName().isEmpty())
            Comments->setObjectName(QStringLiteral("Comments"));
        Comments->resize(650, 615);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/reviews.png"), QSize(), QIcon::Normal, QIcon::Off);
        Comments->setWindowIcon(icon);
        centralwidget = new QWidget(Comments);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 520, 131, 28));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 40, 551, 461));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_2->addWidget(textEdit, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        textEdit_4 = new QTextEdit(layoutWidget_2);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout_4->addWidget(textEdit_4, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        textEdit_5 = new QTextEdit(layoutWidget_2);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout_2->addWidget(textEdit_5, 4, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 549, 16));
        Comments->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Comments);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 26));
        Comments->setMenuBar(menubar);
        statusbar = new QStatusBar(Comments);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Comments->setStatusBar(statusbar);

        retranslateUi(Comments);

        QMetaObject::connectSlotsByName(Comments);
    } // setupUi

    void retranslateUi(QMainWindow *Comments)
    {
        Comments->setWindowTitle(QApplication::translate("Comments", "\320\236\321\202\320\267\321\213\320\262\321\213", nullptr));
        pushButton->setText(QApplication::translate("Comments", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_3->setText(QApplication::translate("Comments", "\320\223\321\200\320\270\320\263\320\276\321\200\320\270\320\271", nullptr));
        textEdit_2->setHtml(QApplication::translate("Comments", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\221\321\213\320\273 \320\262\320\265\321\201\321\214\320\274\320\260 \321\203\320\264\320\270\320\262\320\273\321\221\320\275 \320\277\320\276\320\264\320\261\320\276\321\200\320\272\320\265 \321\204\320\270\320\273\321\214\320\274\320\276\320\262 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\260 (\320\265\321\201\320\273\320\270 \321\207\321\202\320\276 \320\267\320\264\320\265\321\201\321\214 \320\277\320\276\320\272"
                        "\320\260\320\267\321\213\320\262\320\260\321\216\321\202 \321\204\320\270\320\273\321\214\320\274\321\213, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\262\321\213\321\210\320\273\320\270 \320\272\320\260\320\272 \320\275\320\265\320\264\320\260\320\262\320\275\320\276, \321\202\320\260\320\272 \320\274\320\275\320\276\320\263\320\276 \320\273\320\265\321\202 \320\275\320\260\320\267\320\260\320\264). \320\224\320\260\320\262\320\275\320\276 \320\274\320\265\321\207\321\202\320\260\320\273 \321\207\321\202\320\276\320\261\321\213 \320\262 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\265 \320\274\320\276\320\266\320\275\320\276 \320\261\321\213\320\273\320\276 \320\277\320\265\321\200\320\265\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\321\202\320\260\321\200\321\213\320\265 \320\273\320\265\320\263\320\265\320\275\320\264\320\260\321\200\320\275\321\213\320\265 \321\204\320\270\320\273\321\214\320\274\321\213!</span></p></body></html"
                        ">", nullptr));
        textEdit->setHtml(QApplication::translate("Comments", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\236\320\261\320\276\320\266\320\260\321\216 \321\204\320\270\320\273\321\214\320\274 1+1, \321\200\320\260\320\267 20 \320\277\320\265\321\200\320\265\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\320\273\320\260, \320\272\320\276\320\263\320\264\320\260 \321\203\320\267\320\275\320\260\320\273\320\260 \320\276 \320\264\320\260\320\275\320\275\320\276\320\274 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\265 \321\201 \321\215\321\202\320\270\320\274 \321"
                        "\204\320\270\320\273\321\214\320\274\320\276\320\274 \320\262 \320\277\321\200\320\276\320\272\320\260\321\202\320\265, \320\276\321\207\320\265\320\275\321\214 \320\276\320\261\321\200\320\260\320\264\320\276\320\262\320\260\320\273\320\260\321\201\321\214. \320\241\320\277\320\260\321\201\320\270\320\261\320\276 \320\267\320\260 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\273\321\216\320\261\320\270\320\274\321\213\320\265 \321\204\320\270\320\273\321\214\320\274\321\213 \320\262 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\265!!)</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Comments", "\320\220\321\200\321\202\321\203\321\200", nullptr));
        label_5->setText(QApplication::translate("Comments", "\320\224\320\270\320\274\320\260", nullptr));
        textEdit_4->setHtml(QApplication::translate("Comments", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \321\200\320\260\320\267 \320\261\321\213\320\273 \320\262 \320\264\320\260\320\275\320\275\320\276\320\274 \320\272\320\270\320\275\320\276\321\202\320\265\320\260\321\202\321\200\320\265, \320\272\320\270\320\275\320\276 \321\205\320\276\321\200\320\276\321\210\320\265\320\265 \320\277\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\216\321\202, \320\275\320\276 \320\272\321\200\320\265\321\201\320\273\320\260 \320\266\320\265\321\201\321\202\320"
                        "\272\320\276\320\262\320\260\321\202\321\213(((</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Comments", "\320\241\320\262\320\265\321\202\320\273\320\260\320\275\320\260", nullptr));
        textEdit_5->setHtml(QApplication::translate("Comments", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\224\320\260\320\262\320\275\320\276 \321\205\320\276\321\202\320\265\320\273 \320\277\320\265\321\200\320\265\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\257 \320\273\320\265\320\263\320\265\320\275\320\264\320\260, \320\262\321\201\321\221 \320\277\320\276\320\275\321\200\320\260\320\262\320\270\320\273\320\276\321\201\321\214</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Comments", "\320\236\321\202\320\267\321\213\320\262\321\213 \320\276 \320\275\320\260\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Comments: public Ui_Comments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTS_H
