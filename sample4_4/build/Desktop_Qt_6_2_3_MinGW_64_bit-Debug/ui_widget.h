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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinNum;
    QPushButton *pushButton;
    QDoubleSpinBox *spinPrice;
    QDoubleSpinBox *spinTotol;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *spinDec;
    QLabel *label_5;
    QSpinBox *spinBin;
    QLabel *label_6;
    QSpinBox *spinHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(405, 434);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 50, 24, 16));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(173, 50, 24, 16));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(173, 100, 24, 16));
        label_3->setAlignment(Qt::AlignCenter);
        spinNum = new QSpinBox(groupBox);
        spinNum->setObjectName(QString::fromUtf8("spinNum"));
        spinNum->setGeometry(QRect(87, 50, 81, 24));
        spinNum->setValue(4);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(87, 100, 80, 24));
        spinPrice = new QDoubleSpinBox(groupBox);
        spinPrice->setObjectName(QString::fromUtf8("spinPrice"));
        spinPrice->setGeometry(QRect(206, 50, 101, 24));
        spinPrice->setValue(12.500000000000000);
        spinTotol = new QDoubleSpinBox(groupBox);
        spinTotol->setObjectName(QString::fromUtf8("spinTotol"));
        spinTotol->setGeometry(QRect(206, 100, 101, 24));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinDec = new QSpinBox(groupBox_2);
        spinDec->setObjectName(QString::fromUtf8("spinDec"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinDec->sizePolicy().hasHeightForWidth());
        spinDec->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(spinDec, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        spinBin = new QSpinBox(groupBox_2);
        spinBin->setObjectName(QString::fromUtf8("spinBin"));
        spinBin->setDisplayIntegerBase(2);

        gridLayout_2->addWidget(spinBin, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        spinHex = new QSpinBox(groupBox_2);
        spinHex->setObjectName(QString::fromUtf8("spinHex"));
        spinHex->setDisplayIntegerBase(16);

        gridLayout_2->addWidget(spinHex, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\347\232\204\350\276\223\345\205\245\344\270\216\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        spinNum->setSuffix(QCoreApplication::translate("Widget", "kg", nullptr));
        spinNum->setPrefix(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        spinPrice->setPrefix(QCoreApplication::translate("Widget", "\357\277\245", nullptr));
        spinTotol->setPrefix(QCoreApplication::translate("Widget", "\357\277\245", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        spinDec->setPrefix(QCoreApplication::translate("Widget", "Dec ", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        spinBin->setPrefix(QCoreApplication::translate("Widget", "Bin ", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        spinHex->setPrefix(QCoreApplication::translate("Widget", "Hex ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
