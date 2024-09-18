/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actLIstInsert;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actQuit;
    QAction *actSelALL;
    QAction *actSelNone;
    QAction *actSelInvs;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QToolButton *tBtnListIni;
    QToolButton *tBtnLIstClear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListAppend;
    QToolButton *tBtnListDelete;
    QWidget *page_4;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QToolButton *tBtnSortAsc;
    QToolButton *tBtnSortDes;
    QSpacerItem *verticalSpacer;
    QWidget *page_5;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *tBtnClearText;
    QToolButton *tBtnAddLine;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *editCutltemText;
    QCheckBox *chkBoxListEditable;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tBtnSelectltem;
    QToolButton *tBtnSelALL;
    QToolButton *tBtnSelNone;
    QToolButton *tBtnSelInvs;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(768, 458);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QString::fromUtf8("actListIni"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/4.11/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListIni->setMenuRole(QAction::NoRole);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QString::fromUtf8("actListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/4.11/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListClear->setMenuRole(QAction::NoRole);
        actLIstInsert = new QAction(MainWindow);
        actLIstInsert->setObjectName(QString::fromUtf8("actLIstInsert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/4.11/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLIstInsert->setIcon(icon2);
        actLIstInsert->setMenuRole(QAction::NoRole);
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QString::fromUtf8("actListAppend"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/4.11/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        actListAppend->setIcon(icon3);
        actListAppend->setMenuRole(QAction::NoRole);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QString::fromUtf8("actListDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/4.11/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actListDelete->setMenuRole(QAction::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/4.11/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actQuit->setMenuRole(QAction::NoRole);
        actSelALL = new QAction(MainWindow);
        actSelALL->setObjectName(QString::fromUtf8("actSelALL"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/4.11/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSelALL->setIcon(icon6);
        actSelALL->setMenuRole(QAction::NoRole);
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QString::fromUtf8("actSelNone"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/4.11/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSelNone->setIcon(icon7);
        actSelNone->setMenuRole(QAction::NoRole);
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QString::fromUtf8("actSelInvs"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/4.11/14`.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSelInvs->setIcon(icon8);
        actSelInvs->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMaximumSize(QSize(200, 16777215));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 160, 291));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tBtnListIni = new QToolButton(page_3);
        tBtnListIni->setObjectName(QString::fromUtf8("tBtnListIni"));
        tBtnListIni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListIni->setAutoRaise(true);

        gridLayout->addWidget(tBtnListIni, 0, 0, 1, 1);

        tBtnLIstClear = new QToolButton(page_3);
        tBtnLIstClear->setObjectName(QString::fromUtf8("tBtnLIstClear"));
        tBtnLIstClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnLIstClear->setAutoRaise(true);

        gridLayout->addWidget(tBtnLIstClear, 1, 0, 1, 1);

        tBtnListInsert = new QToolButton(page_3);
        tBtnListInsert->setObjectName(QString::fromUtf8("tBtnListInsert"));
        tBtnListInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListInsert->setAutoRaise(true);

        gridLayout->addWidget(tBtnListInsert, 2, 0, 1, 1);

        tBtnListAppend = new QToolButton(page_3);
        tBtnListAppend->setObjectName(QString::fromUtf8("tBtnListAppend"));
        tBtnListAppend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListAppend->setAutoRaise(true);

        gridLayout->addWidget(tBtnListAppend, 3, 0, 1, 1);

        tBtnListDelete = new QToolButton(page_3);
        tBtnListDelete->setObjectName(QString::fromUtf8("tBtnListDelete"));
        tBtnListDelete->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListDelete->setAutoRaise(true);

        gridLayout->addWidget(tBtnListDelete, 4, 0, 1, 1);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/4.11/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon9, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 160, 291));
        gridLayout_2 = new QGridLayout(page_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox = new QCheckBox(page_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        tBtnSortAsc = new QToolButton(page_4);
        tBtnSortAsc->setObjectName(QString::fromUtf8("tBtnSortAsc"));
        tBtnSortAsc->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortAsc->setArrowType(Qt::UpArrow);

        gridLayout_2->addWidget(tBtnSortAsc, 1, 0, 1, 1);

        tBtnSortDes = new QToolButton(page_4);
        tBtnSortDes->setObjectName(QString::fromUtf8("tBtnSortDes"));
        tBtnSortDes->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortDes->setArrowType(Qt::DownArrow);

        gridLayout_2->addWidget(tBtnSortDes, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/4.11/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_4, icon10, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 160, 291));
        gridLayout_3 = new QGridLayout(page_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tBtnClearText = new QToolButton(page_5);
        tBtnClearText->setObjectName(QString::fromUtf8("tBtnClearText"));

        horizontalLayout_4->addWidget(tBtnClearText);

        tBtnAddLine = new QToolButton(page_5);
        tBtnAddLine->setObjectName(QString::fromUtf8("tBtnAddLine"));

        horizontalLayout_4->addWidget(tBtnAddLine);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(page_5);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 1, 0, 1, 1);

        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/4.11/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_5, icon11, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        splitter->addWidget(toolBox);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        editCutltemText = new QLineEdit(groupBox);
        editCutltemText->setObjectName(QString::fromUtf8("editCutltemText"));

        horizontalLayout_2->addWidget(editCutltemText);

        chkBoxListEditable = new QCheckBox(groupBox);
        chkBoxListEditable->setObjectName(QString::fromUtf8("chkBoxListEditable"));
        chkBoxListEditable->setChecked(true);

        horizontalLayout_2->addWidget(chkBoxListEditable);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tBtnSelectltem = new QToolButton(groupBox);
        tBtnSelectltem->setObjectName(QString::fromUtf8("tBtnSelectltem"));
        tBtnSelectltem->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout_3->addWidget(tBtnSelectltem);

        tBtnSelALL = new QToolButton(groupBox);
        tBtnSelALL->setObjectName(QString::fromUtf8("tBtnSelALL"));
        tBtnSelALL->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(tBtnSelALL);

        tBtnSelNone = new QToolButton(groupBox);
        tBtnSelNone->setObjectName(QString::fromUtf8("tBtnSelNone"));
        tBtnSelNone->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(tBtnSelNone);

        tBtnSelInvs = new QToolButton(groupBox);
        tBtnSelInvs->setObjectName(QString::fromUtf8("tBtnSelInvs"));
        tBtnSelInvs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(tBtnSelInvs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(groupBox);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/res/4.11/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon12);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon12);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(listWidget);

        splitter->addWidget(groupBox);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actListIni);
        toolBar->addAction(actListClear);
        toolBar->addAction(actLIstInsert);
        toolBar->addAction(actListAppend);
        toolBar->addAction(actListDelete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actListIni->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListIni->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListIni->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actLIstInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actLIstInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actLIstInsert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actListAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListAppend->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actListDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actSelALL->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelALL->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actSelALL->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actSelNone->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelNone->setToolTip(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelInvs->setText(QCoreApplication::translate("MainWindow", "\345\217\215\345\220\221\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelInvs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\345\220\221\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        tBtnListIni->setText(QCoreApplication::translate("MainWindow", "tBtnListIni", nullptr));
        tBtnLIstClear->setText(QCoreApplication::translate("MainWindow", "tBtnLIstClear", nullptr));
        tBtnListInsert->setText(QCoreApplication::translate("MainWindow", "tBtnListInsert", nullptr));
        tBtnListAppend->setText(QCoreApplication::translate("MainWindow", "tBtnListAppend", nullptr));
        tBtnListDelete->setText(QCoreApplication::translate("MainWindow", "tBtnListDelete", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        tBtnSortAsc->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        tBtnSortDes->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        tBtnClearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        tBtnAddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\346\215\242", nullptr));
        chkBoxListEditable->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        tBtnSelectltem->setText(QCoreApplication::translate("MainWindow", "tBtnSelectltem", nullptr));
        tBtnSelALL->setText(QCoreApplication::translate("MainWindow", "tBtnSelALL", nullptr));
        tBtnSelNone->setText(QCoreApplication::translate("MainWindow", "tBtnSelNone", nullptr));
        tBtnSelInvs->setText(QCoreApplication::translate("MainWindow", "tBtnSelInvs", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
