#ifndef TDIALOGSIZE_H
#define TDIALOGSIZE_H

#include <QDialog>

namespace Ui {
class TDialogSize;
}

class TDialogSize : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogSize(QWidget *parent = nullptr);
    ~TDialogSize();

private:
    Ui::TDialogSize *ui;
};

#endif // TDIALOGSIZE_H
