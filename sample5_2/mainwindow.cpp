#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QFileDialog>
void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    if(current.isValid()){
        labCellPos->setText(QString::asprintf("当前单元格：%d行,%d列",
                                              current.row(),current.column()));
        QStandardItem *aItem=m_model->itemFromIndex(current);
        ui->actFontBold->setChecked(aItem->font().bold());
    }
}

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

    connect(m_selection,&QItemSelectionModel::currentChanged,
            this,&MainWindow::do_currentChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenFile_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",curPath,
                                                     "数据文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty()) return;

    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::ReadOnly)|QIODevice::Text) return;

    QStringList aFileContent;
    ui->plainTextEdit->clear();
    QTextStream aStream(&aFile);
    while(!aStream.atEnd())
    {
        QString str=aStream.readLine();
        ui->plainTextEdit->appendPlainText(str);
        aFileContent.append(str);
    }
    aFile.close();

    labCurFlie->setText("当前文件："+aFileName);
    ui->actAddRow->setEnabled(true);
    ui->actInsertLine->setEnabled(true);
    ui->actDeleteLine->setEnabled(true);
    ui->actDataPreview->setEnabled(true);

    iniModelData(aFileContent);
}

