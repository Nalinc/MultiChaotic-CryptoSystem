#include "dialog_credits.h"
#include "ui_dialog_credits.h"

Dialog_credits::Dialog_credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_credits)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");
    ui->textBrowser->setOpenExternalLinks(true);


    ui->pushButton_2->setStyleSheet("background-image: url(./Resources/license.jpg)");
    ui->pushButton_2->setMaximumHeight(38);
    ui->pushButton_2->setMaximumWidth(100);

    ui->textBrowser->setHidden(true);
    flag=true;
}

Dialog_credits::~Dialog_credits()
{
    delete ui;
}
/*
void Dialog_credits::on_label_7_linkActivated(const QString &link)
{
    if(flag=true)
    {    ui->textBrowser->setHidden(false);
        flag=false;
     }
        else if(flag=false)
     {   ui->textBrowser->setHidden(true);
        flag=true;
      }

       ui->textBrowser->setHidden(false);
}
*/

void Dialog_credits::on_pushButton_2_clicked()
{
    if(flag==true)
    {    ui->textBrowser->setHidden(false);
        flag=false;
     }
     else if(flag==false)
     {   ui->textBrowser->setHidden(true);
        flag=true;
      }
}
