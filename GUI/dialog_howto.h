#ifndef DIALOG_HOWTO_H
#define DIALOG_HOWTO_H

#include <QDialog>

namespace Ui {
class Dialog_howto;
}

class Dialog_howto : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_howto(QWidget *parent = 0);
    ~Dialog_howto();
    
private:
    Ui::Dialog_howto *ui;
};

#endif // DIALOG_HOWTO_H
