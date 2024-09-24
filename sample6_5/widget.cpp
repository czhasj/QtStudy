#include "widget.h"
#include "ui_widget.h"

void Widget::refreshToUI(QGroupBox *curGroupBox)
{

}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->listSource->setAcceptDrops(true);
    ui->listSource->setDragEnabled(true);
    ui->listSource->setDefaultDropAction(Qt::CopyAction);
    ui->listSource->setDragDropMode(QAbstractItemView::DragDrop);

    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setDefaultDropAction(Qt::CopyAction);
    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setDragEnabled(true);
    ui->tableWidget->setDefaultDropAction(Qt::MoveAction);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
}

Widget::~Widget()
{
    delete ui;
}

