#include "tdialogsize.h"
#include "ui_tdialogsize.h"

TDialogSize::TDialogSize(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogSize)
{
    ui->setupUi(this);
}

TDialogSize::~TDialogSize()
{
    delete ui;
}
