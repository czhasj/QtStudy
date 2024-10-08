#include "widget.h"
#include "ui_widget.h"
#include <QMimeData>
#include <QFileInfo>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->plainTextEdit->setAcceptDrops(false);
    ui->label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    QSize sz=ui->plainTextEdit->size();
    ui->plainTextEdit->move(5,5);
    ui->label->move(5,sz.height()+10);
    ui->plainTextEdit->resize(this->width()-10,sz.height());
    ui->label->resize(this->width()-10,this->height()-sz.height()-20);
    event->accept();
}

void Widget::dragEnterEvent(QDragEnterEvent *event)
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("dragEnterEvent实践，mimeData的formats:");
    for(auto &item : event->mimeData()->formats())
        ui->plainTextEdit->appendPlainText(item);

    ui->plainTextEdit->appendPlainText("dragEnterEvent实践，mimeData的urls:");
    for(auto &item : event->mimeData()->urls())
        ui->plainTextEdit->appendPlainText(item.path());

    if(event->mimeData()->hasUrls())
    {
        QString filename=event->mimeData()->urls().at(0).fileName();
        QFileInfo fileInfo(filename);
        QString ex=fileInfo.suffix().toUpper();
        if (ex=="JPG")
            event->acceptProposedAction();
        else
            event->ignore();

    }else {
        event->ignore();
    }
}

void Widget::dropEvent(QDropEvent *event)
{
    QString filename=event->mimeData()->urls().at(0).path(); //完整文件名
    filename=filename.right(filename.length()-1); //去掉最左边的“/”
    QPixmap pixmap(filename);
    ui->label->setPixmap(pixmap);
    event->accept();
}
