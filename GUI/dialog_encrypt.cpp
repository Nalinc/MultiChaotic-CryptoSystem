#include "dialog_encrypt.h"
#include "ui_dialog_encrypt.h"
#include "encrypt.h"
#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

Dialog_encrypt::Dialog_encrypt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_encrypt)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(0,0,0);color: rgb(255,255,255)");
    ui->btn_encrypt2->setStyleSheet("color: white; background-color: rgb(0,0,102)");
    ui->btn_close->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    ui->label_msg->setStyleSheet("color: green");
    ui->btn_clear->setStyleSheet("color: white; background-color: rgb(204,0,0)");
    QPixmap pix1("Resources/lock.jpg");
    ui->label_lock->setPixmap(pix1);
}

Dialog_encrypt::~Dialog_encrypt()
{
    delete ui;
}

void Dialog_encrypt::on_btn_encrypt2_clicked()
{
 QString str=ui->Encrypt_getTxt->text();
  char *src;
  string s=str.toAscii().data();

  src=(char*)s.c_str();

  MakeFile(src);

  ui->lineEdit_2->setText(str);

  Encrypt obj1("text",src);

  ui->label_msg->setText("TASK COMPLETED !");

}

void Dialog_encrypt::MakeFile(char *f)
{
//    fgets(text, sizeof(text), stdin);

    char *text;//[100000];
    char path[40];

    strcpy(path,"./orig/bin/");
    strcat(path,f);
    string str;

    QString content= ui->getContent->toPlainText();
    text=(char*)content.toStdString().c_str();

    ofstream fout;
    fout.open((char*)path);

    if(fout==NULL)
    {
        cout<<"\n\nerr..!!\n\n";
        exit(0);
    }
    str = text;

    for (std::size_t i = 0; i < str.size(); i++)
    {
   //        cout << bitset<32>(str.c_str()[i]) << endl;
       fout << bitset<32>(str.c_str()[i]) << endl;
    }
    //cout<<"\nDone.!";

   fout.close();

}

void Dialog_encrypt::on_btn_clear_clicked()
{
    ui->Encrypt_getTxt->setText("");
    ui->label_msg->setText("");
    ui->getContent->setText("");
    ui->lineEdit_2->setText("");
}
