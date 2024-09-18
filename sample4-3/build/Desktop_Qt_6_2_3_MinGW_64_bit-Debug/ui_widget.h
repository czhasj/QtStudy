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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editNum;
    QLabel *label_2;
    QLineEdit *editPrice;
    QLabel *label_3;
    QLineEdit *editTotal;
    QPushButton *btnDebug;
    QPushButton *btnCal;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *editdec;
    QLabel *label_6;
    QPushButton *btnHex;
    QPushButton *btnDec;
    QPushButton *btnBin;
    QLineEdit *editHex;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *editBin;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(677, 501);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(41, 57, 521, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editNum = new QLineEdit(groupBox);
        editNum->setObjectName(QString::fromUtf8("editNum"));

        gridLayout->addWidget(editNum, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editPrice = new QLineEdit(groupBox);
        editPrice->setObjectName(QString::fromUtf8("editPrice"));

        gridLayout->addWidget(editPrice, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        editTotal = new QLineEdit(groupBox);
        editTotal->setObjectName(QString::fromUtf8("editTotal"));

        gridLayout->addWidget(editTotal, 1, 3, 1, 1);

        btnDebug = new QPushButton(groupBox);
        btnDebug->setObjectName(QString::fromUtf8("btnDebug"));

        gridLayout->addWidget(btnDebug, 2, 1, 1, 1);

        btnCal = new QPushButton(groupBox);
        btnCal->setObjectName(QString::fromUtf8("btnCal"));

        gridLayout->addWidget(btnCal, 2, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editdec = new QLineEdit(groupBox_2);
        editdec->setObjectName(QString::fromUtf8("editdec"));

        gridLayout_2->addWidget(editdec, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        btnHex = new QPushButton(groupBox_2);
        btnHex->setObjectName(QString::fromUtf8("btnHex"));

        gridLayout_2->addWidget(btnHex, 2, 2, 1, 1);

        btnDec = new QPushButton(groupBox_2);
        btnDec->setObjectName(QString::fromUtf8("btnDec"));

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        btnBin = new QPushButton(groupBox_2);
        btnBin->setObjectName(QString::fromUtf8("btnBin"));

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        editHex = new QLineEdit(groupBox_2);
        editHex->setObjectName(QString::fromUtf8("editHex"));

        gridLayout_2->addWidget(editHex, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        editBin = new QLineEdit(groupBox_2);
        editBin->setObjectName(QString::fromUtf8("editBin"));

        gridLayout_2->addWidget(editBin, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        btnDebug->setText(QCoreApplication::translate("Widget", "qDebug( )\346\265\213\350\257\225", nullptr));
        btnCal->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btnHex->setText(QCoreApplication::translate("Widget", "HEX-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        btnDec->setText(QCoreApplication::translate("Widget", "DBC-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        btnBin->setText(QCoreApplication::translate("Widget", "BIN-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
