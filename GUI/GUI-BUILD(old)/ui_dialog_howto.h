/********************************************************************************
** Form generated from reading UI file 'dialog_howto.ui'
**
** Created: Mon Dec 2 04:45:12 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HOWTO_H
#define UI_DIALOG_HOWTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_howto
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_howto)
    {
        if (Dialog_howto->objectName().isEmpty())
            Dialog_howto->setObjectName(QString::fromUtf8("Dialog_howto"));
        Dialog_howto->resize(400, 300);
        label = new QLabel(Dialog_howto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman L"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Dialog_howto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 301, 18));
        label_3 = new QLabel(Dialog_howto);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 221, 18));
        label_4 = new QLabel(Dialog_howto);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 170, 221, 18));
        label_5 = new QLabel(Dialog_howto);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 191, 18));
        pushButton = new QPushButton(Dialog_howto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 0, 71, 21));

        retranslateUi(Dialog_howto);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog_howto, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_howto);
    } // setupUi

    void retranslateUi(QDialog *Dialog_howto)
    {
        Dialog_howto->setWindowTitle(QApplication::translate("Dialog_howto", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_howto", "HOW-TO", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_howto", "1) Synchronize chaotic System(s)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_howto", "2) View Plots", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_howto", "3) Encrypt plain text", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_howto", "4) Decrypt cipher text", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_howto", "close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_howto: public Ui_Dialog_howto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HOWTO_H
