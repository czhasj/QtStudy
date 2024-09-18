#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    labCurFlie=new QLabel("当前文件",this);
    labCurFlie->setMinimumWidth(200);
    labCellPos=new QLabel("当前单元格",this);
    labCellPos->setMinimumWidth(200);
    labCellText=new QLabel("单元格内容",this);
    labCellText->setMinimumWidth(200);
    ui->statusbar->addWidget(labCurFlie);
    ui->statusbar->addWidget(labCellPos);
    ui->statusbar->addWidget(labCellText);

    m_model=new QStandardItemModel(2,FixedColumnCount,this);
    m_selection=new QItemSelectionModel(m_model,this);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
}

MainWindow::~MainWindow()
{
    delete ui;
}
