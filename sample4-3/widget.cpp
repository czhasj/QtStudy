#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCal_clicked()
{
    int num=ui->editNum->text().toInt();
    float price=ui->editPrice->text().toFloat();

    float total=price*num;
    QString str;
    str=str.setNum(total,'f',2);
    ui->editTotal->setText(str);
}


void Widget::on_btnDebug_clicked()
{
    qDebug("PI=%f",3.1415926);
}


void Widget::on_btnDec_clicked()
{
    int val=ui->editdec->text().toInt();
    QString str=QString::number(val,16);
    ui->editHex->setText(str);
    str=QString::number(val,2);
    ui->editBin->setText(str);
}


void Widget::on_btnBin_clicked()
{
    bool ok;
    int val=ui->editBin->text().toInt(&ok,2);
    if(!ok) return;
    QString str=QString::number(val,16);
    ui->editHex->setText(str);
    str=QString::number(val,10);
    ui->editdec->setText(str);
}


void Widget::on_btnHex_clicked()
{
    bool ok;
    int val=ui->editHex->text().toInt(&ok,16);
    QString str=QString::number(val,2);
    ui->editBin->setText(str);
    str=QString::number(val,10);
    ui->editdec->setText(str);
}

