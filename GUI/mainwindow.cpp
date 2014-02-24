#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_sync.h"
#include "dialog_encrypt.h"
#include "dialog_decrypt.h"
#include "dialog_credits.h"
#include "dialog_howto.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(770,450);
    this->setStyleSheet("background-image: url(Resources/bg.jpg)");


//    this->setStyleSheet("background-color: rgb(64,64,64);");

    ui->btn_credits->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_howto->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_encrypt->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_decrypt->setStyleSheet("color: white; background-image: url(Resources/btn_bg.jpg)");
    ui->btn_sync->setStyleSheet("color: white; background-image: url(Resources/btn_bg.jpg)");
    ui->btn_viewplots->setStyleSheet("color: white; background-image: url(Resources/btn_bg.jpg)");

    ui->label_2->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");// background-image: url(Resources/btn_bg.jpg)");
    ui->label_3->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");// background-image: url(Resources/btn_bg.jpg)");

    ui->label->setStyleSheet("background-image: url(Resources/home_img.png)");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_encrypt_clicked()
{
  Dialog_encrypt obj;
  obj.setModal(true);
  obj.exec();
}

void MainWindow::on_btn_sync_clicked()
{
    Dialog_sync obj;
    obj.setModal(true);
     obj.exec();

}

void MainWindow::on_btn_decrypt_clicked()
{
Dialog_Decrypt obj;
obj.setModal(true);
obj.exec();

}

void MainWindow::on_btn_howto_clicked()
{
    Dialog_howto obj;
    obj.setModal(true);
    obj.exec();

}

void MainWindow::on_btn_credits_clicked()
{
    Dialog_credits obj;
    obj.setModal(true);
    obj.exec();

}

void MainWindow::on_btn_viewplots_clicked()
{
    system("gnuplot ./GNUPlot/*.gpl");
    system("eog img_arnold.png");

}
