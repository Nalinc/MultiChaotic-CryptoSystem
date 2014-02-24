/********************************************************************************
** Form generated from reading UI file 'dialog_sync.ui'
**
** Created: Sun Jan 12 23:00:27 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SYNC_H
#define UI_DIALOG_SYNC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_sync
{
public:
    QPushButton *btn_rossler;
    QPushButton *btn_lorenz;
    QLabel *label_sync;
    QPushButton *pushButton_3;
    QLabel *label_1;
    QLabel *label_2;
    QPushButton *btn_clear;
    QLabel *label;
    QPushButton *btn_rf;

    void setupUi(QDialog *Dialog_sync)
    {
        if (Dialog_sync->objectName().isEmpty())
            Dialog_sync->setObjectName(QString::fromUtf8("Dialog_sync"));
        Dialog_sync->resize(590, 426);
        btn_rossler = new QPushButton(Dialog_sync);
        btn_rossler->setObjectName(QString::fromUtf8("btn_rossler"));
        btn_rossler->setGeometry(QRect(20, 310, 141, 51));
        btn_lorenz = new QPushButton(Dialog_sync);
        btn_lorenz->setObjectName(QString::fromUtf8("btn_lorenz"));
        btn_lorenz->setGeometry(QRect(430, 310, 141, 51));
        label_sync = new QLabel(Dialog_sync);
        label_sync->setObjectName(QString::fromUtf8("label_sync"));
        label_sync->setGeometry(QRect(80, 10, 441, 301));
        label_sync->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/bg.png")));
        pushButton_3 = new QPushButton(Dialog_sync);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 0, 61, 21));
        label_1 = new QLabel(Dialog_sync);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(140, 360, 341, 18));
        label_2 = new QLabel(Dialog_sync);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 380, 341, 18));
        btn_clear = new QPushButton(Dialog_sync);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setGeometry(QRect(0, 0, 61, 21));
        label = new QLabel(Dialog_sync);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 400, 451, 20));
        btn_rf = new QPushButton(Dialog_sync);
        btn_rf->setObjectName(QString::fromUtf8("btn_rf"));
        btn_rf->setGeometry(QRect(180, 330, 231, 27));

        retranslateUi(Dialog_sync);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Dialog_sync, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_sync);
    } // setupUi

    void retranslateUi(QDialog *Dialog_sync)
    {
        Dialog_sync->setWindowTitle(QApplication::translate("Dialog_sync", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_rossler->setText(QApplication::translate("Dialog_sync", "Rossler Attractor", 0, QApplication::UnicodeUTF8));
        btn_lorenz->setText(QApplication::translate("Dialog_sync", "Lorenz Attractor", 0, QApplication::UnicodeUTF8));
        label_sync->setText(QString());
        pushButton_3->setText(QApplication::translate("Dialog_sync", "Close", 0, QApplication::UnicodeUTF8));
        label_1->setText(QString());
        label_2->setText(QString());
        btn_clear->setText(QApplication::translate("Dialog_sync", "Clear", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btn_rf->setText(QApplication::translate("Dialog_sync", "Rabinovich Fabrikant Equations", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_sync: public Ui_Dialog_sync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SYNC_H
