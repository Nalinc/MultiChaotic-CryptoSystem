#include "dialog_decrypt.h"
#include "ui_dialog_decrypt.h"
#include "decrypt.h"

Dialog_Decrypt::Dialog_Decrypt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Decrypt)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(0,0,0);color: rgb(255,255,255)");
    ui->btn_decrypt2->setStyleSheet("color: white; background-color: rgb(0,0,102)");
    ui->btn_close->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    ui->pushButton->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    ui->label_msg->setStyleSheet("color: green");

    QPixmap pix1("Resources/key.jpg");
    ui->label_key->setPixmap(pix1);


}

Dialog_Decrypt::~Dialog_Decrypt()
{
    delete ui;
}

void Dialog_Decrypt::on_btn_decrypt2_clicked()
{
     QString str=ui->decrypt_getTxt->text();
     char *src;
     string s=str.toAscii().data();

     src=(char*)s.c_str();

     ui->lineEdit_3->setText(str);

     Decrypt obj1("text",src);

     ui->label_msg->setText("TASK COMPLETED !");

}

void Dialog_Decrypt::on_pushButton_clicked()
{
    ui->decrypt_getTxt->setText("");
    ui->label_msg->setText("");
}
