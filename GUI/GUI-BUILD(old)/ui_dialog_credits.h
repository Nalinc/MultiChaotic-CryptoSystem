/********************************************************************************
** Form generated from reading UI file 'dialog_credits.ui'
**
** Created: Mon Dec 9 23:11:20 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREDITS_H
#define UI_DIALOG_CREDITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog_credits
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_credits)
    {
        if (Dialog_credits->objectName().isEmpty())
            Dialog_credits->setObjectName(QString::fromUtf8("Dialog_credits"));
        Dialog_credits->resize(400, 353);
        label = new QLabel(Dialog_credits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 121, 18));
        label_2 = new QLabel(Dialog_credits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 100, 81, 18));
        label_3 = new QLabel(Dialog_credits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 120, 111, 18));
        label_4 = new QLabel(Dialog_credits);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 120, 111, 18));
        label_5 = new QLabel(Dialog_credits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 10, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman L"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_6 = new QLabel(Dialog_credits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 70, 141, 18));
        pushButton = new QPushButton(Dialog_credits);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 0, 51, 27));
        textBrowser = new QTextBrowser(Dialog_credits);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 200, 261, 141));
        pushButton_2 = new QPushButton(Dialog_credits);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 150, 91, 41));

        retranslateUi(Dialog_credits);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog_credits, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_credits);
    } // setupUi

    void retranslateUi(QDialog *Dialog_credits)
    {
        Dialog_credits->setWindowTitle(QApplication::translate("Dialog_credits", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_credits", "Nalin  Chhibber", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_credits", "M.Mahesh", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_credits", "Somil Makhija", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_credits", "Shashank Pant", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_credits", "CREDITS", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_credits", "CSE-I [2010-2014]", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_credits", "close", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Dialog_credits", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,sans-serif'; color:#000000; background-color:#f5f5f5;\">This work\302\240is licensed under a</span><a href=\"http://creativecommons.org/licenses/by-nc-nd/4.0/\"><span style=\" text-decoration: underline; color:#0000ff;\">\302\240Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-f"
                        "amily:'Helvetica Neue,Helvetica,Arial,sans-serif'; color:#000000; background-color:#f5f5f5;\">Permissions beyond the scope of this license may be available at</span><a href=\"http://www.nalinchhibber.com\"><span style=\" text-decoration: underline; color:#0000ff;\">\302\240http://www.nalinchhibber.com</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_credits: public Ui_Dialog_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREDITS_H
