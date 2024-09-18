#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QActionGroup>
#include <QSpinBox>
#include<QFontComboBox>
#include<QLabel>
#include<QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //解决中文界面，英文界面互斥
    QActionGroup *actionGroup=new QActionGroup(this);
    actionGroup->addAction(ui->actLong_CN);
    actionGroup->addAction(ui->actLong_EN);
    actionGroup->setExclusive(true);

    //创建一些无法通过可视化UI直接设计的组件
    QSpinBox *spinFontSize=new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    QFontComboBox *comboFontBox=new QFontComboBox(this);
    comboFontBox->setMinimumWidth(150);
    comboFontBox->setFont(ui->textEdit->font());
    ui->toolBar->addWidget(comboFontBox);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actClose);

    //status bar
    labFilie=new QLabel(this);
    labFilie->setMaximumWidth(150);
    labFilie->setText("文件名：");
    ui->statusbar->addWidget(labFilie);
    progressbar=new QProgressBar(this);
    progressbar->setMinimum(5);
    progressbar->setMaximum(50);
    progressbar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressbar);
    labInfo=new QLabel("Permanent");
    ui->statusbar->addPermanentWidget(labInfo);

    connect(spinFontSize,&QSpinBox::valueChanged,this,&MainWindow::on_fontSize_changed);
    connect(comboFontBox,&QFontComboBox::currentFontChanged,this,&MainWindow::on_font_changed);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actFile_New_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);
    labFilie->setText("文件名：新建的一个文件");

}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actEdit_Copy->setEnabled(b);
    ui->actEdit_Cut->setEnabled(b);
    ui->actEdit_Paste->setEnabled(ui->textEdit->canPaste());

}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    ui->actFont_Bold->setChecked(fmt.font().bold());
    ui->actFont_ltalic->setChecked(fmt.font().italic());
    ui->actFont_UnderLine->setChecked(fmt.font().underline());
}


void MainWindow::on_actFont_Bold_triggered(bool checked)
{
     QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    if(checked)
         fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actFont_ltalic_triggered(bool checked)
{
     QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
     ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actFont_UnderLine_triggered(bool checked)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}

void MainWindow::on_fontSize_changed(int fontSize)
{
     QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(fontSize);
     ui->textEdit->setCurrentCharFormat(fmt);
    progressbar->setValue(fontSize);
}

void MainWindow::on_font_changed(const QFont &font)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit->setCurrentCharFormat(fmt);
    labInfo->setText("字体名称："+font.family());
}

