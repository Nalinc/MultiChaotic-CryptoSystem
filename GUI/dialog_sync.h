#ifndef DIALOG_SYNC_H
#define DIALOG_SYNC_H

#include <QDialog>
#include <cstdlib>
#include <cstdio>

namespace Ui {
class Dialog_sync;
}

class Dialog_sync : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_sync(QWidget *parent = 0);
    ~Dialog_sync();
    
private slots:
    void on_btn_rossler_clicked();

    void on_btn_arnold_clicked();

    void on_btn_clear_clicked();

private:
    Ui::Dialog_sync *ui;
};

#endif // DIALOG_SYNC_H
