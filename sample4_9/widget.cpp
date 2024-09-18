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

void Widget::on_btnclear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnInitItems_2_clicked()
{
    QIcon icon;
    icon.addFile(":/icon/yuanshen/1.png");
    ui->combItems->clear();
    for(int i=0;i<20;++i)
        ui->combItems->addItem(icon,QString("Item%1").arg(i));
}


void Widget::on_chkEditable_clicked(bool checked)
{
    ui->combItems->setEditable(checked);
}


void Widget::on_btnClear_clicked()
{
    ui->combItems->clear();
    // QMap<QString,int> City_Zone;
    // City_Zone.insert("石家庄",10);
    // City_Zone.insert("辛集",20);
    // City_Zone.insert("安庆",50);
    // City_Zone.insert("潜山",90);
    // foreach(const QString &str,City_Zone.keys())
    //     ui->comboCities->addItem(str,City_Zone.value(str));

}


void Widget::on_combItems_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboCities_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    QString str=ui->comboCities->currentText()+ui->comboCities->currentData().toString();
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_btnInitCities_clicked()
{
    ui->combItems->clear();
    QMap<QString,int> City_Zone;
    City_Zone.insert("石家庄",10);
    City_Zone.insert("辛集",20);
    City_Zone.insert("安庆",50);
    City_Zone.insert("潜山",90);
    foreach(const QString &str,City_Zone.keys())
        ui->comboCities->addItem(str,City_Zone.value(str));
}

