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

void Widget::on_pushButton_clicked()
{
    QString str=ui->editStr->text();
    if(str.isEmpty()) return;

    for(qint16 i=0;i<str.size();i++){
        QChar ch=str.at(i);
        char16_t uniCode=ch.unicode();

        QString chStr(ch);
        QString info=chStr+QString::asprintf("\t,Unicode编码=0x%X",uniCode);
        ui->plainTextEdit->appendPlainText(info);

    }
}


void Widget::on_pushButton_5_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_2_clicked()
{
    QString str=ui->editchar->text();
    if(str.isEmpty()) return;

    QChar ch=str.at(0);
    char16_t uniCode=ch.unicode();

    //QString chStr(ch);
    QString info=str+QString::asprintf("\t,Unicode编码=0x%X",uniCode);
    ui->plainTextEdit->appendPlainText(info);

    ui->chkDigit->setChecked(ch.isDigit());
    ui->chkLetter->setChecked(ch.isLetter());
    ui->chkLetterOrNumber->setChecked(ch.isLetterOrNumber());
    ui->chkUpper->setChecked(ch.isUpper());
    ui->chkLower->setChecked(ch.isLower());
    ui->chkMark->setChecked(ch.isMark());
    ui->chkSpace->setChecked(ch.isSpace());
    ui->chkSymbol->setChecked(ch.isSymbol());
    ui->chkPunct->setChecked(ch.isPunct());

}


void Widget::on_pushButton_3_clicked()
{
    QString str="Dimple";
    ui->plainTextEdit->appendPlainText(str);
    QChar chP='P';

    str[0]=chP;
    ui->plainTextEdit->appendPlainText("\n"+str);

}


void Widget::on_pushButton_4_clicked()
{
    QString str="Hello,北京！";
    ui->plainTextEdit->appendPlainText(str);
    // QChar chP='P';
    QString qd="青岛";


    str[6]=qd.at(0);
    str[7]=qd.at(1);
    ui->plainTextEdit->appendPlainText("\n"+str);
}


void Widget::on_pushButton_6_clicked()
{
    QString HuStr="河to湖";
    QChar He= QChar::fromUcs2(HuStr[0].unicode());
    QChar Hu= QChar(HuStr[3].unicode());
    QString str="他们来自河南或河北";
    ui->plainTextEdit->appendPlainText(str);
    for(int i=0;i<str.size();i++){
        if(str.at(i)==He)
            str[i]=Hu;


    }
    ui->plainTextEdit->appendPlainText("\n"+str);
}

