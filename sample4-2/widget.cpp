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
    ui->plainTextEdit->appendPlainText("front(),back()函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("front="+QString(str1.front()));
    ui->plainTextEdit->appendPlainText("back="+QString(str1.back()));

}


void Widget::on_pushButton_2_clicked()
{
    ui->plainTextEdit->appendPlainText("right(),left()函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("right="+QString(str1.right(17)));
    ui->plainTextEdit->appendPlainText("left="+QString(str1.left(2)));
}


void Widget::on_pushButton_3_clicked()
{
    ui->plainTextEdit->appendPlainText("first(),last()函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    QString str2=ui->comboBoxStr2->currentText();
    ui->plainTextEdit->appendPlainText("str1:"+str1);
    ui->plainTextEdit->appendPlainText("str2:"+str2);
    int N=str1.lastIndexOf(str2);
    QString strFirst=str1.first(N+1);
    QString strLast=str1.last(str1.size()-N-1);
    ui->plainTextEdit->appendPlainText("路径名称："+strFirst);
    ui->plainTextEdit->appendPlainText("文件名称："+strLast);
}


void Widget::on_pushButton_4_clicked()
{
    ui->plainTextEdit->appendPlainText("section函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    QString str2=ui->comboBoxStr2->currentText();
    int N =ui->spinBox->value();
    QString strSection=str1.section(str2,N,N);
    ui->plainTextEdit->appendPlainText(strSection);

}


void Widget::on_BtnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_5_clicked()
{
    ui->plainTextEdit->appendPlainText("isNull和isEmpty函数测试");
    QString str1,str2="";
    ui->plainTextEdit->appendPlainText("QString str1,str2=""");

    QString str = "str1.isNull()=";
    if(str1.isNull())str+="ture";else str+="felse";
    ui->plainTextEdit->appendPlainText(str);

    str="str1.isEmpty()=";
    if(str1.isEmpty())str+="ture";else str+="felse";
    ui->plainTextEdit->appendPlainText(str);

    str = "str2.isNull()=";
    if(str2.isNull())str+="ture";else str+="felse";
    ui->plainTextEdit->appendPlainText(str);

    str="str2.isEmpty()=";
    if(str2.isEmpty())str+="ture";else str+="felse";
    ui->plainTextEdit->appendPlainText(str);


}




void Widget::on_pushButton_6_clicked()
{
    ui->plainTextEdit->appendPlainText("resize函数测试:");
    QString str;
    str.resize(5,'0');
    ui->plainTextEdit->appendPlainText(str);

    str.resize(10,QChar(0x54C8));
    ui->plainTextEdit->appendPlainText(str);

}


void Widget::on_pushButton_7_clicked()
{
    ui->plainTextEdit->appendPlainText("size,cont,lenght函数测试：");
    QString str1=ui->comboBoxStr1->currentText();

    ui->plainTextEdit->appendPlainText(QString::asprintf("size:%lld",str1.size()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("count:%lld",str1.count()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("length:%lld",str1.length()));
}


void Widget::on_pushButton_8_clicked()
{
    ui->plainTextEdit->appendPlainText("fill函数测试");
    QString str="Hello";
    str.fill('X');
    ui->plainTextEdit->appendPlainText(str);
    str.fill('A',2);
    ui->plainTextEdit->appendPlainText(str);
    str.fill(QChar(0x54C8),3);
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_pushButton_9_clicked()
{
    ui->plainTextEdit->appendPlainText("trimme,simplified函数测试");
    QString str1=ui->comboBoxStr1->currentText();

    ui->plainTextEdit->appendPlainText("str1= " +str1);

    QString str2=str1.trimmed();
    ui->plainTextEdit->appendPlainText("trimme()= "+str2);

    str2=str1.simplified();
    ui->plainTextEdit->appendPlainText("simplified()= "+str2);
}


void Widget::on_pushButton_10_clicked()
{
    ui->plainTextEdit->appendPlainText("insert函数测试");
    QString str1="It is great";
    ui->plainTextEdit->appendPlainText(str1);

    int N= str1.lastIndexOf(" ");
    str1.insert(N,"n't");
    ui->plainTextEdit->appendPlainText(str1);
}


void Widget::on_pushButton_11_clicked()
{
    //移除特定的字符
    ui->plainTextEdit->appendPlainText("remove移除特定的字符");
    QString str1="你们，我们，他们";
    ui->plainTextEdit->appendPlainText("str1= "+str1);
    QString DeStr="们";
    QChar  DeChar=QChar(DeStr[0].unicode());
    str1.remove(DeChar);
    ui->plainTextEdit->appendPlainText("str1= "+str1);

    //移除右侧N个字符
    ui->plainTextEdit->appendPlainText("remove移除右侧N个字符");
    str1="D:\\BaiduNetdiskDownload";
    ui->plainTextEdit->appendPlainText(str1);

    int N=str1.lastIndexOf("\\");
    str1.remove(N+1,20);
    ui->plainTextEdit->appendPlainText(str1);


}

