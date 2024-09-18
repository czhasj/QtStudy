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

    labCurFile=new QLabel("当前文件",this);
    labCellPos=new QLabel("当前单元格",this);

    labCellText=new QLabel("单元格内容",this);

    m_model;
    m_selection;
}

MainWindow::~MainWindow()
{
    delete ui;
}
