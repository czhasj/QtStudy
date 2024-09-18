#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListAppend->setDefaultAction(ui->actListAppend);
    ui->tBtnListDelete->setDefaultAction(ui->actListDelete);
    ui->tBtnLIstClear->setDefaultAction(ui->actListClear);
    ui->tBtnListInsert->setDefaultAction(ui->actLIstInsert);

    ui->tBtnSelALL->setDefaultAction(ui->actSelALL);
    ui->tBtnSelNone->setDefaultAction(ui->actSelNone);
    ui->tBtnSelInvs->setDefaultAction(ui->actSelInvs);

    QMenu* menuSelection=new QMenu(this);
    menuSelection->addAction(ui->actSelALL);
    menuSelection->addAction(ui->actSelNone);
    menuSelection->addAction(ui->actSelInvs);

    ui->tBtnSelectltem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSelectltem->setMenu(menuSelection);

    QToolButton *aBtn=new QToolButton(this);
    aBtn->setPopupMode(QToolButton::InstantPopup);
    aBtn->setText("选择选项");
    aBtn->setIcon(QIcon(":/res/4.11/15.png"));
    aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    aBtn->setMenu(menuSelection);
    ui->toolBar->addWidget(aBtn);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actQuit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actListIni_triggered()
{
    QListWidgetItem *aItem;
    ui->listWidget->clear();
    QIcon aIcon;
    aIcon.addFile(":/res/4.11/11.png");
    bool chk=ui->chkBoxListEditable->isChecked();
    for(int i=0;i<10;i++)
    {
        aItem=new QListWidgetItem();
        aItem->setText("Item"+QString::number(i));
        aItem->setIcon(aIcon);
        aItem->setCheckState(Qt::Checked);

        if(chk)
            aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        else
            aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable);
        ui->listWidget->addItem(aItem);
    }
}


void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}


void MainWindow::on_actLIstInsert_triggered()
{
    QIcon aIcon(":/res/4.11/11.png");
    bool chk=ui->chkBoxListEditable->isChecked();

    QListWidgetItem *aItem=new QListWidgetItem();
    aItem->setText("ItemInserted");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable);
    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);

}


void MainWindow::on_actListAppend_triggered()
{
    QIcon aIcon(":/res/4.11/11.png");
    bool chk=ui->chkBoxListEditable->isChecked();

    QListWidgetItem *aItem=new QListWidgetItem();
    aItem->setText("Item Added");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable);
    ui->listWidget->addItem(aItem);
}


void MainWindow::on_actListDelete_triggered()
{
    int row =ui->listWidget->currentRow();
    delete ui->listWidget->takeItem(row);
}


void MainWindow::on_actSelALL_triggered()
{
    int cnt=ui->listWidget->count();
    for(int i=0;i<cnt;++i)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        aItem->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_actSelNone_triggered()
{
    int cnt=ui->listWidget->count();
    for(int i=0;i<cnt;++i)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        aItem->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_actSelInvs_triggered()
{
    int cnt=ui->listWidget->count();
    for(int i=0;i<cnt;++i)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        if(aItem->checkState()==Qt::Checked)
            aItem->setCheckState(Qt::Unchecked);
        else
            aItem->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current!=NULL)
    {
        if(previous==NULL)
            str="当前项："+current->text();
        else
            str="前一项："+previous->text()+";当前项："+current->text();
        ui->editCutltemText->setText(str);
    }

    ui->plainTextEdit->appendPlainText("currentItemChanged()信号被发射");

}


void MainWindow::on_checkBox_clicked(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_tBtnSortAsc_clicked()
{
    if(ui->checkBox->checkState()==Qt::Checked)
        ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_tBtnSortDes_clicked()
{
    if(ui->checkBox->checkState()==Qt::Checked)
        ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu *menuList=new QMenu();
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actLIstInsert);
    menuList->addAction(ui->actListAppend);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListDelete);
    menuList->addAction(ui->actListIni);
    menuList->addSeparator();
    menuList->addAction(ui->actSelALL);
    menuList->addAction(ui->actSelInvs);
    menuList->addAction(ui->actSelNone);
    menuList->exec(QCursor::pos());

    delete menuList;
}

