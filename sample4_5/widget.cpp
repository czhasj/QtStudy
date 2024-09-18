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

void Widget::on_btnAlign_Left_2_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignLeft);
}


void Widget::on_btnAlign_Center_2_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignCenter);
}


void Widget::on_btnAlign_Right_2_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_btnFont_Bold_2_clicked(bool checked)
{
    QFont font =ui->lineEdit->font();
    font.setBold(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_btnFont_Italic_2_clicked(bool checked)
{
    QFont font =ui->lineEdit->font();
    font.setItalic(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_btnFont_UnderLine_2_clicked(bool checked)
{
    QFont font =ui->lineEdit->font();
    font.setUnderline(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_checkBox_clicked(bool checked)
{
    ui->lineEdit->setReadOnly(checked);
}


void Widget::on_checkBox_2_clicked(bool checked)
{
    ui->lineEdit->setEnabled(checked);
}


void Widget::on_checkBox_3_clicked(bool checked)
{
    ui->lineEdit->setClearButtonEnabled(checked);
}


void Widget::on_radioButton_clicked()
{
    QPalette plet=ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::black);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_radioButton_2_clicked()
{
    QPalette plet=ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::red);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_radioButton_3_clicked()
{
    QPalette plet=ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::blue);
    ui->lineEdit->setPalette(plet);
}

