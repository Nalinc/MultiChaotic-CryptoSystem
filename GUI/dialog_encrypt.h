#ifndef DIALOG_ENCRYPT_H
#define DIALOG_ENCRYPT_H

#include <QDialog>

namespace Ui {
class Dialog_encrypt;
}

class Dialog_encrypt : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_encrypt(QWidget *parent = 0);
    void MakeFile(char *f);
    ~Dialog_encrypt();
    
private slots:
    void on_btn_encrypt2_clicked();

    void on_btn_clear_clicked();

private:
    Ui::Dialog_encrypt *ui;
};

#endif // DIALOG_ENCRYPT_H
