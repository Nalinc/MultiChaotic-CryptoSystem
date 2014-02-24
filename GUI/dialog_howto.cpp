#include "dialog_howto.h"
#include "ui_dialog_howto.h"

Dialog_howto::Dialog_howto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_howto)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");

}

Dialog_howto::~Dialog_howto()
{
    delete ui;
}
