/********************************************************************************
** Form generated from reading UI file 'dialog_encrypt.ui'
**
** Created: Mon Dec 2 02:38:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ENCRYPT_H
#define UI_DIALOG_ENCRYPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_encrypt
{
public:
    QPushButton *btn_encrypt2;
    QLineEdit *Encrypt_getTxt;
    QLineEdit *lineEdit_2;
    QTextEdit *getContent;
    QLabel *label_src;
    QLabel *label_destination;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_lock;
    QPushButton *btn_close;
    QLabel *label_msg;
    QPushButton *btn_clear;

    void setupUi(QDialog *Dialog_encrypt)
    {
        if (Dialog_encrypt->objectName().isEmpty())
            Dialog_encrypt->setObjectName(QString::fromUtf8("Dialog_encrypt"));
        Dialog_encrypt->resize(608, 442);
        btn_encrypt2 = new QPushButton(Dialog_encrypt);
        btn_encrypt2->setObjectName(QString::fromUtf8("btn_encrypt2"));
        btn_encrypt2->setGeometry(QRect(260, 200, 101, 41));
        Encrypt_getTxt = new QLineEdit(Dialog_encrypt);
        Encrypt_getTxt->setObjectName(QString::fromUtf8("Encrypt_getTxt"));
        Encrypt_getTxt->setGeometry(QRect(30, 230, 181, 31));
        lineEdit_2 = new QLineEdit(Dialog_encrypt);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(410, 230, 181, 28));
        getContent = new QTextEdit(Dialog_encrypt);
        getContent->setObjectName(QString::fromUtf8("getContent"));
        getContent->setGeometry(QRect(30, 310, 561, 121));
        label_src = new QLabel(Dialog_encrypt);
        label_src->setObjectName(QString::fromUtf8("label_src"));
        label_src->setGeometry(QRect(30, 210, 131, 18));
        label_destination = new QLabel(Dialog_encrypt);
        label_destination->setObjectName(QString::fromUtf8("label_destination"));
        label_destination->setGeometry(QRect(410, 210, 131, 18));
        label_3 = new QLabel(Dialog_encrypt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 270, 121, 18));
        label_4 = new QLabel(Dialog_encrypt);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 270, 161, 21));
        label_5 = new QLabel(Dialog_encrypt);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 290, 121, 18));
        label_6 = new QLabel(Dialog_encrypt);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 290, 121, 18));
        label_lock = new QLabel(Dialog_encrypt);
        label_lock->setObjectName(QString::fromUtf8("label_lock"));
        label_lock->setGeometry(QRect(110, 20, 381, 161));
        label_lock->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/lock.jpg")));
        btn_close = new QPushButton(Dialog_encrypt);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(540, 0, 61, 21));
        label_msg = new QLabel(Dialog_encrypt);
        label_msg->setObjectName(QString::fromUtf8("label_msg"));
        label_msg->setGeometry(QRect(240, 260, 151, 31));
        btn_clear = new QPushButton(Dialog_encrypt);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setGeometry(QRect(10, 0, 61, 21));

        retranslateUi(Dialog_encrypt);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_encrypt, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_encrypt);
    } // setupUi

    void retranslateUi(QDialog *Dialog_encrypt)
    {
        Dialog_encrypt->setWindowTitle(QApplication::translate("Dialog_encrypt", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_encrypt2->setText(QApplication::translate("Dialog_encrypt", "Encrypt", 0, QApplication::UnicodeUTF8));
        label_src->setText(QApplication::translate("Dialog_encrypt", "Source ", 0, QApplication::UnicodeUTF8));
        label_destination->setText(QApplication::translate("Dialog_encrypt", "Destination", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_encrypt", "Path: ./orig/bin/", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_encrypt", "Path: ./encrypted/", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_encrypt", "./encrypted/bin/", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_encrypt", "Text To Encrypt", 0, QApplication::UnicodeUTF8));
        label_lock->setText(QString());
        btn_close->setText(QApplication::translate("Dialog_encrypt", "close", 0, QApplication::UnicodeUTF8));
        label_msg->setText(QString());
        btn_clear->setText(QApplication::translate("Dialog_encrypt", "clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_encrypt: public Ui_Dialog_encrypt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ENCRYPT_H
