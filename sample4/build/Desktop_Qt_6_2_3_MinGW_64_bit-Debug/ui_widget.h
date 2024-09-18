/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editStr;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *editchar;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QCheckBox *chkLower;
    QCheckBox *chkDigit;
    QCheckBox *chkLetterOrNumber;
    QCheckBox *chkSpace;
    QCheckBox *chkPunct;
    QCheckBox *chkLetter;
    QCheckBox *chkSymbol;
    QCheckBox *chkUpper;
    QCheckBox *chkMark;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(558, 578);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editStr = new QLineEdit(groupBox);
        editStr->setObjectName(QString::fromUtf8("editStr"));

        gridLayout->addWidget(editStr, 0, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editchar = new QLineEdit(groupBox);
        editchar->setObjectName(QString::fromUtf8("editchar"));

        gridLayout->addWidget(editchar, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        chkLower = new QCheckBox(groupBox_4);
        chkLower->setObjectName(QString::fromUtf8("chkLower"));

        gridLayout_4->addWidget(chkLower, 6, 0, 1, 2);

        chkDigit = new QCheckBox(groupBox_4);
        chkDigit->setObjectName(QString::fromUtf8("chkDigit"));

        gridLayout_4->addWidget(chkDigit, 0, 0, 1, 2);

        chkLetterOrNumber = new QCheckBox(groupBox_4);
        chkLetterOrNumber->setObjectName(QString::fromUtf8("chkLetterOrNumber"));

        gridLayout_4->addWidget(chkLetterOrNumber, 2, 0, 1, 2);

        chkSpace = new QCheckBox(groupBox_4);
        chkSpace->setObjectName(QString::fromUtf8("chkSpace"));

        gridLayout_4->addWidget(chkSpace, 7, 0, 1, 2);

        chkPunct = new QCheckBox(groupBox_4);
        chkPunct->setObjectName(QString::fromUtf8("chkPunct"));

        gridLayout_4->addWidget(chkPunct, 9, 0, 1, 2);

        chkLetter = new QCheckBox(groupBox_4);
        chkLetter->setObjectName(QString::fromUtf8("chkLetter"));

        gridLayout_4->addWidget(chkLetter, 1, 0, 1, 2);

        chkSymbol = new QCheckBox(groupBox_4);
        chkSymbol->setObjectName(QString::fromUtf8("chkSymbol"));

        gridLayout_4->addWidget(chkSymbol, 8, 0, 1, 2);

        chkUpper = new QCheckBox(groupBox_4);
        chkUpper->setObjectName(QString::fromUtf8("chkUpper"));

        gridLayout_4->addWidget(chkUpper, 3, 0, 1, 1);

        chkMark = new QCheckBox(groupBox_4);
        chkMark->setObjectName(QString::fromUtf8("chkMark"));

        gridLayout_4->addWidget(chkMark, 4, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\270\252\345\255\227\347\254\246\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\344\270\216UTF-16\347\232\204\350\275\254\346\215\242", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "QChar\346\257\224\350\276\203\345\222\214\346\233\277\346\215\242", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\344\270\216Latin1\347\232\204\350\275\254\346\215\242", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\347\273\223\346\236\234", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "QChar\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        chkLower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        chkDigit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        chkLetterOrNumber->setText(QCoreApplication::translate("Widget", "isLetterOrNumber", nullptr));
        chkSpace->setText(QCoreApplication::translate("Widget", "isSpace", nullptr));
        chkPunct->setText(QCoreApplication::translate("Widget", "isPunct", nullptr));
        chkLetter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        chkSymbol->setText(QCoreApplication::translate("Widget", "isSymbol", nullptr));
        chkUpper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        chkMark->setText(QCoreApplication::translate("Widget", "isMark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
