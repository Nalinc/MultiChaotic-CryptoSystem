#ifndef DIALOG_DECRYPT_H
#define DIALOG_DECRYPT_H

#include <QDialog>

namespace Ui {
class Dialog_Decrypt;
}

class Dialog_Decrypt : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_Decrypt(QWidget *parent = 0);
    ~Dialog_Decrypt();
    
private slots:
    void on_btn_decrypt2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_Decrypt *ui;
};

#endif // DIALOG_DECRYPT_H
