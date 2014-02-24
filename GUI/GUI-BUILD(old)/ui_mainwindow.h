/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Dec 9 19:58:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_sync;
    QPushButton *btn_encrypt;
    QPushButton *btn_decrypt;
    QPushButton *btn_credits;
    QPushButton *btn_howto;
    QPushButton *btn_viewplots;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(772, 452);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn_sync = new QPushButton(centralWidget);
        btn_sync->setObjectName(QString::fromUtf8("btn_sync"));
        btn_sync->setGeometry(QRect(10, 170, 181, 51));
        btn_encrypt = new QPushButton(centralWidget);
        btn_encrypt->setObjectName(QString::fromUtf8("btn_encrypt"));
        btn_encrypt->setGeometry(QRect(220, 330, 161, 51));
        btn_decrypt = new QPushButton(centralWidget);
        btn_decrypt->setObjectName(QString::fromUtf8("btn_decrypt"));
        btn_decrypt->setGeometry(QRect(420, 330, 161, 51));
        btn_credits = new QPushButton(centralWidget);
        btn_credits->setObjectName(QString::fromUtf8("btn_credits"));
        btn_credits->setGeometry(QRect(10, 400, 81, 31));
        btn_howto = new QPushButton(centralWidget);
        btn_howto->setObjectName(QString::fromUtf8("btn_howto"));
        btn_howto->setGeometry(QRect(620, 90, 151, 51));
        btn_viewplots = new QPushButton(centralWidget);
        btn_viewplots->setObjectName(QString::fromUtf8("btn_viewplots"));
        btn_viewplots->setGeometry(QRect(10, 110, 141, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 90, 301, 231));
        label->setPixmap(QPixmap(QString::fromUtf8("../GUI-build-desktop-Desktop_Qt_4_8_1_for_GCC__Qt_SDK__Release/Resources/home_img.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 60, 261, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 40, 161, 18));
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 772, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btn_sync->setText(QApplication::translate("MainWindow", "Synchronize Chaos", 0, QApplication::UnicodeUTF8));
        btn_encrypt->setText(QApplication::translate("MainWindow", "Encrypt", 0, QApplication::UnicodeUTF8));
        btn_decrypt->setText(QApplication::translate("MainWindow", "Decrypt", 0, QApplication::UnicodeUTF8));
        btn_credits->setText(QApplication::translate("MainWindow", "Credits", 0, QApplication::UnicodeUTF8));
        btn_howto->setText(QApplication::translate("MainWindow", "How To", 0, QApplication::UnicodeUTF8));
        btn_viewplots->setText(QApplication::translate("MainWindow", "View Plots", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", " HYBRID CRYPTOSYSTEM", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "MULTICHAOTIC", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
