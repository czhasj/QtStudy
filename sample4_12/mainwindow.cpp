#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->clear();

    QTreeWidgetItem *header=new QTreeWidgetItem();
    header->setText(colItem,"目录和文件");
    header->setText(colItemType,"节点类型");
    header->setText(colDate,"最后的修改日期");

    header->setTextAlignment(colItem,Qt::AlignHCenter|Qt::AlignVCenter);
    header->setTextAlignment(colItemType,Qt::AlignHCenter|Qt::AlignVCenter);
    header->setTextAlignment(colDate,Qt::AlignHCenter|Qt::AlignVCenter);

    ui->treeWidget->setHeaderItem(header);
    //添加一个根节点
    QIcon icon(":/icon/4.12/11.png");
    QTreeWidgetItem *topItem=new QTreeWidgetItem();
    topItem->setIcon(colItem,icon);
    topItem->setText(colItem,"图片");
    topItem->setText(colItemType,"Top Item");
    topItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    topItem->setCheckState(MainWindow::colItem,Qt::Checked);
    ui->treeWidget->addTopLevelItem(topItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}
