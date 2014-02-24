/********************************************************************************
** Form generated from reading UI file 'dialog_decrypt.ui'
**
** Created: Mon Dec 9 19:02:07 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DECRYPT_H
#define UI_DIALOG_DECRYPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Decrypt
{
public:
    QPushButton *btn_decrypt2;
    QLineEdit *lineEdit_3;
    QLabel *label_destination;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *decrypt_getTxt;
    QLabel *label_src;
    QLabel *label_key;
    QPushButton *btn_close;
    QLabel *label_msg;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Dialog_Decrypt)
    {
        if (Dialog_Decrypt->objectName().isEmpty())
            Dialog_Decrypt->setObjectName(QString::fromUtf8("Dialog_Decrypt"));
        Dialog_Decrypt->resize(609, 408);
        btn_decrypt2 = new QPushButton(Dialog_Decrypt);
        btn_decrypt2->setObjectName(QString::fromUtf8("btn_decrypt2"));
        btn_decrypt2->setGeometry(QRect(250, 230, 111, 41));
        lineEdit_3 = new QLineEdit(Dialog_Decrypt);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(410, 290, 181, 28));
        label_destination = new QLabel(Dialog_Decrypt);
        label_destination->setObjectName(QString::fromUtf8("label_destination"));
        label_destination->setGeometry(QRect(410, 270, 131, 18));
        label_3 = new QLabel(Dialog_Decrypt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 330, 141, 18));
        label_5 = new QLabel(Dialog_Decrypt);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 350, 121, 18));
        label_4 = new QLabel(Dialog_Decrypt);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 330, 161, 21));
        decrypt_getTxt = new QLineEdit(Dialog_Decrypt);
        decrypt_getTxt->setObjectName(QString::fromUtf8("decrypt_getTxt"));
        decrypt_getTxt->setGeometry(QRect(30, 290, 181, 31));
        label_src = new QLabel(Dialog_Decrypt);
        label_src->setObjectName(QString::fromUtf8("label_src"));
        label_src->setGeometry(QRect(30, 270, 131, 18));
        label_key = new QLabel(Dialog_Decrypt);
        label_key->setObjectName(QString::fromUtf8("label_key"));
        label_key->setGeometry(QRect(180, 20, 271, 181));
        label_key->setPixmap(QPixmap(QString::fromUtf8("../GUI-build-desktop-Desktop_Qt_4_8_1_for_GCC__Qt_SDK__Release/Resources/key.jpg")));
        btn_close = new QPushButton(Dialog_Decrypt);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(540, 0, 61, 21));
        label_msg = new QLabel(Dialog_Decrypt);
        label_msg->setObjectName(QString::fromUtf8("label_msg"));
        label_msg->setGeometry(QRect(240, 360, 151, 21));
        pushButton = new QPushButton(Dialog_Decrypt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 61, 21));
        label = new QLabel(Dialog_Decrypt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 350, 121, 18));

        retranslateUi(Dialog_Decrypt);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_Decrypt, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_Decrypt);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Decrypt)
    {
        Dialog_Decrypt->setWindowTitle(QApplication::translate("Dialog_Decrypt", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_decrypt2->setText(QApplication::translate("Dialog_Decrypt", "Decrypt", 0, QApplication::UnicodeUTF8));
        label_destination->setText(QApplication::translate("Dialog_Decrypt", "Destination", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_Decrypt", "Path: ./encrypted/", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_Decrypt", "./decrypted/bin/", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_Decrypt", "Path: ./decrypted/", 0, QApplication::UnicodeUTF8));
        label_src->setText(QApplication::translate("Dialog_Decrypt", "Source ", 0, QApplication::UnicodeUTF8));
        label_key->setText(QString());
        btn_close->setText(QApplication::translate("Dialog_Decrypt", "close", 0, QApplication::UnicodeUTF8));
        label_msg->setText(QString());
        pushButton->setText(QApplication::translate("Dialog_Decrypt", "clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_Decrypt", "./encrypted/bin/", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Decrypt: public Ui_Dialog_Decrypt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DECRYPT_H
