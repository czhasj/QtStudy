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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_New;
    QAction *actFile_Open;
    QAction *actFile_Save;
    QAction *actEdit_Cut;
    QAction *actEdit_Copy;
    QAction *actEdit_Paste;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *actFont_Bold;
    QAction *actFont_ltalic;
    QAction *actFont_UnderLine;
    QAction *actLong_CN;
    QAction *actLong_EN;
    QAction *actClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_M;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/word/icon-word.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actFile_New = new QAction(MainWindow);
        actFile_New->setObjectName(QString::fromUtf8("actFile_New"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/word/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_New->setIcon(icon1);
        actFile_New->setMenuRole(QAction::NoRole);
        actFile_Open = new QAction(MainWindow);
        actFile_Open->setObjectName(QString::fromUtf8("actFile_Open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/word/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Open->setIcon(icon2);
        actFile_Open->setMenuRole(QAction::NoRole);
        actFile_Save = new QAction(MainWindow);
        actFile_Save->setObjectName(QString::fromUtf8("actFile_Save"));
        actFile_Save->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/word/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Save->setIcon(icon3);
        actFile_Save->setMenuRole(QAction::NoRole);
        actEdit_Cut = new QAction(MainWindow);
        actEdit_Cut->setObjectName(QString::fromUtf8("actEdit_Cut"));
        actEdit_Cut->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/word/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Cut->setIcon(icon4);
        actEdit_Cut->setMenuRole(QAction::NoRole);
        actEdit_Copy = new QAction(MainWindow);
        actEdit_Copy->setObjectName(QString::fromUtf8("actEdit_Copy"));
        actEdit_Copy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/word/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Copy->setIcon(icon5);
        actEdit_Copy->setMenuRole(QAction::NoRole);
        actEdit_Paste = new QAction(MainWindow);
        actEdit_Paste->setObjectName(QString::fromUtf8("actEdit_Paste"));
        actEdit_Paste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/word/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Paste->setIcon(icon6);
        actEdit_Paste->setMenuRole(QAction::NoRole);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        action_Undo->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/word/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon7);
        action_Undo->setMenuRole(QAction::NoRole);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QString::fromUtf8("action_Redo"));
        action_Redo->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/word/0.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon8);
        action_Redo->setMenuRole(QAction::NoRole);
        actFont_Bold = new QAction(MainWindow);
        actFont_Bold->setObjectName(QString::fromUtf8("actFont_Bold"));
        actFont_Bold->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/word/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_Bold->setIcon(icon9);
        actFont_Bold->setMenuRole(QAction::NoRole);
        actFont_ltalic = new QAction(MainWindow);
        actFont_ltalic->setObjectName(QString::fromUtf8("actFont_ltalic"));
        actFont_ltalic->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/word/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_ltalic->setIcon(icon10);
        actFont_ltalic->setMenuRole(QAction::NoRole);
        actFont_UnderLine = new QAction(MainWindow);
        actFont_UnderLine->setObjectName(QString::fromUtf8("actFont_UnderLine"));
        actFont_UnderLine->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/word/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_UnderLine->setIcon(icon11);
        actFont_UnderLine->setMenuRole(QAction::NoRole);
        actLong_CN = new QAction(MainWindow);
        actLong_CN->setObjectName(QString::fromUtf8("actLong_CN"));
        actLong_CN->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/word/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLong_CN->setIcon(icon12);
        actLong_CN->setMenuRole(QAction::NoRole);
        actLong_EN = new QAction(MainWindow);
        actLong_EN->setObjectName(QString::fromUtf8("actLong_EN"));
        actLong_EN->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icon/word/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLong_EN->setIcon(icon13);
        actLong_EN->setMenuRole(QAction::NoRole);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icon/word/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon14);
        actClose->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_M = new QMenu(menubar);
        menu_M->setObjectName(QString::fromUtf8("menu_M"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu_F->addAction(actFile_New);
        menu_F->addAction(actFile_Open);
        menu_F->addAction(actFile_Save);
        menu_E->addAction(actEdit_Cut);
        menu_E->addAction(actEdit_Copy);
        menu_E->addAction(actEdit_Paste);
        menu_E->addSeparator();
        menu_E->addAction(action_Undo);
        menu_E->addAction(action_Redo);
        menu_M->addAction(actLong_CN);
        menu_M->addAction(actLong_EN);
        toolBar->addAction(actFile_New);
        toolBar->addAction(actFile_Open);
        toolBar->addAction(actFile_Save);
        toolBar->addSeparator();
        toolBar->addAction(actEdit_Cut);
        toolBar->addAction(actEdit_Copy);
        toolBar->addAction(actEdit_Paste);
        toolBar->addSeparator();
        toolBar->addAction(action_Undo);
        toolBar->addAction(action_Redo);
        toolBar->addSeparator();
        toolBar->addAction(actFont_Bold);
        toolBar->addAction(actFont_ltalic);
        toolBar->addAction(actFont_UnderLine);
        toolBar->addSeparator();
        toolBar->addAction(actLong_CN);
        toolBar->addAction(actLong_EN);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actEdit_Cut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actEdit_Copy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actEdit_Paste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(action_Undo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));
        QObject::connect(action_Redo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));
        QObject::connect(actClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(textEdit, &QTextEdit::undoAvailable, action_Undo, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::redoAvailable, action_Redo, &QAction::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Word", nullptr));
        actFile_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Paste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(shortcut)
        action_Redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actFont_Bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_ltalic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_ltalic->setToolTip(QCoreApplication::translate("MainWindow", "\345\200\276\346\226\234\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_UnderLine->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
        actLong_CN->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        actLong_EN->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\242\263\347\247\257\345\210\206\347\256\241\347\220\206\350\275\257\344\273\266 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\232\217\347\235\200\345\205\250\347\220\203\346\260\224\345\200\231\345\217\230\345\214\226\351\227\256\351\242\230\346\227\245\347\233\212\344\270\245\351"
                        "\207\215\357\274\214\347\242\263\346\216\222\346\224\276\347\232\204\347\256\241\347\220\206\346\210\220\344\270\272\344\272\206\345\220\204\345\233\275\346\224\277\345\272\234\345\222\214\344\274\201\344\270\232\345\205\263\346\263\250\347\232\204\351\207\215\347\202\271\343\200\202\347\242\263\347\247\257\345\210\206\346\230\257\344\270\200\347\247\215\344\273\245\351\274\223\345\212\261\344\270\252\344\272\272\345\222\214\344\274\201\344\270\232\345\207\217\345\260\221\347\242\263\346\216\222\346\224\276\347\232\204\346\226\271\345\274\217\357\274\214\351\200\232\350\277\207\347\211\271\345\256\232\347\232\204\350\256\241\347\256\227\346\234\272\345\210\266\345\260\206\347\242\263\346\216\222\346\224\276\351\207\217\350\275\254\345\214\226\344\270\272\345\217\257\344\272\244\346\230\223\347\232\204\347\247\257\345\210\206\343\200\202\350\277\231\344\272\233\347\247\257\345\210\206\345\217\257\344\273\245\347\224\250\344\272\216\350\264\255\344\271\260\345\225\206\345\223\201\343\200\201\345\205\221\346\215\242"
                        "\346\234\215\345\212\241\357\274\214\347\224\232\350\207\263\345\217\257\344\273\245\345\234\250\345\270\202\345\234\272\344\270\212\350\277\233\350\241\214\344\272\244\346\230\223\343\200\202\350\256\276\350\256\241\344\270\200\344\270\252\347\242\263\347\247\257\345\210\206\347\256\241\347\220\206\345\271\263\345\217\260\345\217\257\344\273\245\345\270\256\345\212\251\347\224\250\346\210\267\344\272\206\350\247\243\345\222\214\347\256\241\347\220\206\344\273\226\344\273\254\347\232\204\347\242\263\346\216\222\346\224\276\357\274\214\345\220\214\346\227\266\344\270\272\347\216\257\344\277\235\344\272\213\344\270\232\345\201\232\345\207\272\350\264\241\347\214\256\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\232\345\212\241\351\234\200\346\261\202\357\274\232 </p>\n"
""
                        "<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \347\247\257\345\210\206\350\256\241\347\256\227\344\270\216\350\256\260\345\275\225\357\274\232\345\271\263\345\217\260\351\234\200\350\246\201\345\205\267\345\244\207\350\256\241\347\256\227\347\224\250\346\210\267\346\227\245\345\270\270\346\264\273\345\212\250\357\274\210\345\246\202\344\272\244\351\200\232\343\200\201\350\203\275\346\272\220\346\266\210\350\200\227\357\274\211\344\272\247\347\224\237\347\232\204\347\242\263\346\216\222\346\224\276\351\207\217\357\274\214\345\271\266\350\207\252\345\212\250\350\275\254\345\214\226\344\270\272\347\242\263\347\247\257\345\210\206\347\232\204\345\212\237\350\203\275\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \347\242\263\347\247\257\345\210\206\347\256\241\347\220\206\357\274\232\347\224\250\346\210\267\345\217\257\344\273\245\346\237"
                        "\245\347\234\213\347\247\257\345\210\206\347\232\204\347\264\257\350\256\241\346\203\205\345\206\265\357\274\214\345\271\266\350\203\275\347\224\250\347\247\257\345\210\206\345\205\221\346\215\242\347\216\257\344\277\235\345\225\206\345\223\201\346\210\226\346\234\215\345\212\241\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \347\242\263\346\216\222\346\224\276\345\210\206\346\236\220\344\270\216\346\212\245\345\221\212\357\274\232\345\271\263\345\217\260\345\272\224\344\270\272\347\224\250\346\210\267\347\224\237\346\210\220\350\257\246\347\273\206\347\232\204\347\242\263\346\216\222\346\224\276\346\212\245\345\221\212\357\274\214\345\270\256\345\212\251\347\224\250\346\210\267\344\272\206\350\247\243\345\205\266\347\242\263\350\266\263\350\277\271\357\274\214\344\277\203\344\275\277\345\205\266\345\201\232\345\207\272\347\216\257\344\277\235\351\200\211\346\213\251\343\200\202 </p>\n"
"<p style=\" margin-top:"
                        "12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \347\247\257\345\210\206\344\272\244\346\230\223\345\212\237\350\203\275\357\274\232\344\270\272\346\234\211\351\234\200\346\261\202\347\232\204\347\224\250\346\210\267\346\217\220\344\276\233\347\242\263\347\247\257\345\210\206\347\232\204\350\275\254\350\256\251\345\222\214\344\272\244\346\230\223\345\212\237\350\203\275\357\274\214\345\270\256\345\212\251\344\274\201\344\270\232\346\210\226\344\270\252\344\272\272\350\277\233\350\241\214\347\242\263\344\270\255\345\222\214\347\232\204\346\223\215\344\275\234\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. \344\274\201\344\270\232\345\222\214\346\224\277\345\272\234\345\220\210\344\275\234\357\274\232\346\224\257\346\214\201\344\274\201\344\270\232\344\270\216\346\224\277\345\272\234\347\232\204\345\220\210\344\275\234\357\274\214\344\274\201\344\270\232\345\217"
                        "\257\344\273\245\351\200\232\350\277\207\345\271\263\345\217\260\346\217\220\344\276\233\345\245\226\345\212\261\350\256\241\345\210\222\357\274\214\346\224\277\345\272\234\345\217\257\344\273\245\351\274\223\345\212\261\345\205\254\344\274\227\345\217\202\344\270\216\347\242\263\345\207\217\346\216\222\350\241\214\345\212\250\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\346\210\267\351\234\200\346\261\202\357\274\232 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \346\231\256\351\200\232\347\224\250\346\210\267\357\274\232 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \350"
                        "\256\260\345\275\225\346\227\245\345\270\270\346\264\273\345\212\250\357\274\210\344\272\244\351\200\232\346\226\271\345\274\217\343\200\201\350\203\275\346\272\220\346\266\210\350\200\227\347\255\211\357\274\211\344\273\245\350\256\241\347\256\227\347\242\263\346\216\222\346\224\276\351\207\217\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \346\237\245\347\234\213\347\242\263\346\216\222\346\224\276\345\216\206\345\217\262\346\225\260\346\215\256\357\274\214\345\271\266\344\272\206\350\247\243\345\246\202\344\275\225\345\207\217\345\260\221\347\242\263\350\266\263\350\277\271\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \344\275\277\347\224\250\347\242\263\347\247\257\345\210\206\345\205\221\346\215\242\344\274\230\346\203\240\345\225\206\345\223\201\346\210\226\345\217\202\344\270"
                        "\216\347\216\257\344\277\235\346\264\273\345\212\250\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \344\270\216\345\205\266\344\273\226\347\224\250\346\210\267\344\272\244\346\215\242\346\210\226\344\272\244\346\230\223\347\242\263\347\247\257\345\210\206\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \344\274\201\344\270\232\347\224\250\346\210\267\357\274\232 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \350\216\267\345\217\226\347\242\263\346\216\222\346\224\276\346\225\260\346\215\256\357\274\214\350\256\241\347\256\227\344\274\201\344\270\232"
                        "\347\224\237\344\272\247\350\277\207\347\250\213\344\270\255\347\232\204\347\242\263\346\216\222\346\224\276\346\200\273\351\207\217\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \345\210\251\347\224\250\345\271\263\345\217\260\350\264\255\344\271\260\347\242\263\347\247\257\345\210\206\344\273\245\346\212\265\346\266\210\347\242\263\346\216\222\346\224\276\357\274\214\346\224\257\346\214\201\347\242\263\344\270\255\345\222\214\346\224\277\347\255\226\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \344\270\272\345\221\230\345\267\245\346\210\226\345\256\242\346\210\267\346\217\220\344\276\233\347\242\263\347\247\257\345\210\206\345\245\226\345\212\261\350\256\241\345\210\222\357\274\214\351\274\223\345\212\261\347\273\277\350\211\262\347\224\237\346\264\273\346\226\271\345\274\217\343"
                        "\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \346\224\277\345\272\234\344\270\216\347\216\257\344\277\235\346\234\272\346\236\204\357\274\232 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \345\210\251\347\224\250\345\271\263\345\217\260\347\273\237\350\256\241\347\242\263\346\216\222\346\224\276\346\203\205\345\206\265\357\274\214\345\210\266\345\256\232\347\242\263\345\207\217\346\216\222\346\224\277\347\255\226\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240\302\240 - \346\277\200\345\212\261\344\274\201\344\270\232\345\222\214\345\205\254\344\274\227\345\217"
                        "\202\344\270\216\345\207\217\346\216\222\350\256\241\345\210\222\357\274\214\346\216\250\345\212\250\347\273\277\350\211\262\345\217\221\345\261\225\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\235\236\345\212\237\350\203\275\351\234\200\346\261\202\357\274\232 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \346\200\247\350\203\275\351\234\200\346\261\202\357\274\232\345\271\263\345\217\260\345\272\224\350\203\275\345\244\204\347\220\206\345\244\247\351\207\217\347\224\250\346\210\267\345\220\214\346\227\266\345\234\250\347\272\277\347\232\204\347\242\263\347\247\257\345\210\206\350\256\241\347\256\227\345\222\214\344\272\244\346\230\223\357\274\214\347\241\256\344\277\235\346\225\260"
                        "\346\215\256\345\244\204\347\220\206\351\253\230\346\225\210\343\200\201\345\223\215\345\272\224\345\277\253\351\200\237\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \345\256\211\345\205\250\351\234\200\346\261\202\357\274\232\347\263\273\347\273\237\345\272\224\344\277\235\351\232\234\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204\345\256\211\345\205\250\357\274\214\345\260\244\345\205\266\346\230\257\344\272\244\346\230\223\345\222\214\344\270\252\344\272\272\351\232\220\347\247\201\344\277\241\346\201\257\357\274\214\351\230\262\346\255\242\346\225\260\346\215\256\346\263\204\351\234\262\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \345\217\257\346\211\251\345\261\225\346\200\247\357\274\232\345\271\263\345\217\260\345\272\224\345\205\267\345\244\207\350\211\257\345\245\275\347\232\204\345\217\257"
                        "\346\211\251\345\261\225\346\200\247\357\274\214\350\203\275\345\244\237\351\232\217\347\235\200\347\224\250\346\210\267\345\242\236\351\225\277\345\222\214\345\212\237\350\203\275\351\234\200\346\261\202\345\242\236\345\212\240\350\200\214\350\277\233\350\241\214\346\211\251\345\261\225\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \345\217\257\347\224\250\346\200\247\357\274\232\347\263\273\347\273\237\347\225\214\351\235\242\345\272\224\347\256\200\346\264\201\346\230\223\347\224\250\357\274\214\346\273\241\350\266\263\344\270\215\345\220\214\345\271\264\351\276\204\346\256\265\347\224\250\346\210\267\347\232\204\344\275\277\347\224\250\351\234\200\346\261\202\357\274\214\345\271\266\346\217\220\344\276\233\350\211\257\345\245\275\347\232\204\347\224\250\346\210\267\344\275\223\351\252\214\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\">5. \345\205\274\345\256\271\346\200\247\357\274\232\345\271\263\345\217\260\345\272\224\346\224\257\346\214\201\345\244\232\347\247\215\350\256\276\345\244\207\357\274\210PC\343\200\201\346\211\213\346\234\272\347\255\211\357\274\211\345\222\214\344\270\273\346\265\201\346\223\215\344\275\234\347\263\273\347\273\237\357\274\210\345\246\202iOS\343\200\201Android\357\274\211\347\232\204\350\256\277\351\227\256\343\200\202 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \347\250\263\345\256\232\346\200\247\357\274\232\347\263\273\347\273\237\345\272\224\345\205\267\345\244\207\351\253\230\345\217\257\347\224\250\346\200\247\357\274\214\347\241\256\344\277\235\345\234\250\351\253\230\345\271\266\345\217\221\346\203\205\345\206\265\344\270\213\344\273\215\350\203\275\347\250\263\345\256\232\350\277\220\350\241\214\343\200\202 </p></body></html>", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E\357\274\211", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217\357\274\210&M\357\274\211", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
