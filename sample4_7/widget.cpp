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

void Widget::on_pushButton_5_clicked()
{
    QDateTime curDateTime=QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));

    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}


void Widget::on_btnQDebugTime_clicked()
{
    QTime TM1(13,24,5);
    QString str=TM1.toString("HH:mm:ss");
    qDebug("Original time=%s",str.toLocal8Bit().data());

    QTime TM2=TM1.addSecs(150);
    str=TM1.toString("HH:mm:ss");
    qDebug("150s later,time=%s",str.toLocal8Bit().data());

    TM2=QTime::currentTime();
    str=TM2.toString("HH:mm:ss zzz");
    qDebug("Current time=%s",str.toLocal8Bit().data());
    qDebug("Hour=%d",TM2.hour());
    qDebug("Minute=%d",TM2.minute());
    qDebug("Second=%d",TM2.second());
    qDebug("MSecond=%d",TM2.msec());

}


void Widget::on_btnSetTime_clicked()
{
    QString str=ui->editTime->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QTime tm=QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_btnSetDate_clicked()
{
    QString str=ui->editDate->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QDate dm=QDate::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(dm);
    }
}


void Widget::on_btnSetDateTime_clicked()
{
    QString str=ui->editDateTime->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QDateTime dtm=QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(dtm);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QString str=ui->calendarWidget->selectedDate().toString("yyyy年M月d日");
    ui->editCalendar->setText(str);

}

