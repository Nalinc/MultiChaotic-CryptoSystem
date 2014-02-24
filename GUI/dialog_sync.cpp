#include "dialog_sync.h"
#include "ui_dialog_sync.h"
#include "arnold.h"
#include "rossler.h"
#include <stdio.h>
#include <stdlib.h>

Dialog_sync::Dialog_sync(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sync)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(0,0,0);");

    ui->btn_arnold->setStyleSheet("color: white; background-color: rgb(0,0,102)");
    ui->btn_rossler->setStyleSheet("color: white; background-color: rgb(0,0,102)");
    ui->pushButton_3->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    ui->btn_clear->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    ui->label_1->setStyleSheet("color: green");
    ui->label_2->setStyleSheet("color: green");


    QPixmap pix1("Resources/sync.png");
    ui->label_sync->setPixmap(pix1);
}

Dialog_sync::~Dialog_sync()
{
    delete ui;
}

void Dialog_sync::on_btn_rossler_clicked()
{
    char buffer[50];
    Rossler ros;
    sprintf(buffer,"Rossler Attractor Synchronized at %f",ros.i);
    ui->label_2->setText(buffer);
}

void Dialog_sync::on_btn_arnold_clicked()
{
    char buffer[50];
    Arnold arn;
    sprintf(buffer,"Arnold's Cat Map Synchronized at %f",arn.i);
    ui->label_1->setText(buffer);
}

void Dialog_sync::on_btn_clear_clicked()
{
     ui->label_1->setText("");
     ui->label_2->setText("");
}
