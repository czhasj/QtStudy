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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddFolder;
    QAction *actAddFiles;
    QAction *actZoomln;
    QAction *actZoomOut;
    QAction *actZoomRealSize;
    QAction *actFitW;
    QAction *actFitH;
    QAction *actDeleteItme;
    QAction *actErgodicItem;
    QAction *actDockFloat;
    QAction *actQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *labPicture;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(666, 475);
        actAddFolder = new QAction(MainWindow);
        actAddFolder->setObjectName(QString::fromUtf8("actAddFolder"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/4.12/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFolder->setIcon(icon);
        actAddFolder->setMenuRole(QAction::NoRole);
        actAddFiles = new QAction(MainWindow);
        actAddFiles->setObjectName(QString::fromUtf8("actAddFiles"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/4.12/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFiles->setIcon(icon1);
        actAddFiles->setMenuRole(QAction::NoRole);
        actZoomln = new QAction(MainWindow);
        actZoomln->setObjectName(QString::fromUtf8("actZoomln"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/4.12/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomln->setIcon(icon2);
        actZoomln->setMenuRole(QAction::NoRole);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QString::fromUtf8("actZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/4.12/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon3);
        actZoomOut->setMenuRole(QAction::NoRole);
        actZoomRealSize = new QAction(MainWindow);
        actZoomRealSize->setObjectName(QString::fromUtf8("actZoomRealSize"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/4.12/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomRealSize->setIcon(icon4);
        actZoomRealSize->setMenuRole(QAction::NoRole);
        actFitW = new QAction(MainWindow);
        actFitW->setObjectName(QString::fromUtf8("actFitW"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/4.12/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFitW->setIcon(icon5);
        actFitW->setMenuRole(QAction::NoRole);
        actFitH = new QAction(MainWindow);
        actFitH->setObjectName(QString::fromUtf8("actFitH"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/4.12/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFitH->setIcon(icon6);
        actFitH->setMenuRole(QAction::NoRole);
        actDeleteItme = new QAction(MainWindow);
        actDeleteItme->setObjectName(QString::fromUtf8("actDeleteItme"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/4.12/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDeleteItme->setIcon(icon7);
        actDeleteItme->setMenuRole(QAction::NoRole);
        actErgodicItem = new QAction(MainWindow);
        actErgodicItem->setObjectName(QString::fromUtf8("actErgodicItem"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/4.12/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actErgodicItem->setIcon(icon8);
        actErgodicItem->setMenuRole(QAction::NoRole);
        actDockFloat = new QAction(MainWindow);
        actDockFloat->setObjectName(QString::fromUtf8("actDockFloat"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/4.12/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDockFloat->setIcon(icon9);
        actDockFloat->setMenuRole(QAction::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/4.12/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon10);
        actQuit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 429, 359));
        labPicture = new QLabel(scrollAreaWidgetContents);
        labPicture->setObjectName(QString::fromUtf8("labPicture"));
        labPicture->setGeometry(QRect(180, 150, 54, 16));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 666, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/4.12/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setIcon(0, icon11);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actAddFolder);
        menu->addAction(actAddFiles);
        menu->addSeparator();
        menu->addAction(actDeleteItme);
        menu->addAction(actErgodicItem);
        menu->addSeparator();
        menu->addAction(actQuit);
        menu_2->addAction(actZoomln);
        menu_2->addAction(actZoomOut);
        menu_2->addAction(actZoomRealSize);
        menu_2->addSeparator();
        menu_2->addAction(actFitH);
        menu_2->addAction(actFitW);
        menu_2->addSeparator();
        menu_2->addAction(actDockFloat);
        mainToolBar->addAction(actAddFolder);
        mainToolBar->addAction(actAddFiles);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actDeleteItme);
        mainToolBar->addAction(actErgodicItem);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actZoomln);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actZoomRealSize);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFitH);
        mainToolBar->addAction(actFitW);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actDockFloat);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actAddFolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225...", nullptr));
#if QT_CONFIG(tooltip)
        actAddFolder->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actAddFolder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actAddFiles->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266...", nullptr));
#if QT_CONFIG(tooltip)
        actAddFiles->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actAddFiles->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actZoomln->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actZoomln->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actZoomln->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actZoomRealSize->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actZoomRealSize->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actFitW->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actFitW->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFitW->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actFitH->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actFitH->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFitH->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actDeleteItme->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actDeleteItme->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actDeleteItme->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actErgodicItem->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actErgodicItem->setToolTip(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actErgodicItem->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actDockFloat->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#if QT_CONFIG(tooltip)
        actDockFloat->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        labPicture->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\255\220\351\241\271\347\233\256", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
