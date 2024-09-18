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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxStr2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QComboBox *comboBoxStr1;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QPushButton *BtnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(912, 489);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(600, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_4->addWidget(pushButton_9, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_4->addWidget(pushButton_12, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(600, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        comboBoxStr2 = new QComboBox(groupBox_4);
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->setObjectName(QString::fromUtf8("comboBoxStr2"));
        comboBoxStr2->setMinimumSize(QSize(0, 0));

        gridLayout_6->addWidget(comboBoxStr2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 1, 2, 1, 1);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_6->addWidget(spinBox, 1, 3, 1, 1);

        comboBoxStr1 = new QComboBox(groupBox_4);
        comboBoxStr1->addItem(QString());
        comboBoxStr1->addItem(QString());
        comboBoxStr1->setObjectName(QString::fromUtf8("comboBoxStr1"));
        comboBoxStr1->setMinimumSize(QSize(0, 0));

        gridLayout_6->addWidget(comboBoxStr1, 0, 1, 1, 3);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        BtnClear = new QPushButton(groupBox_5);
        BtnClear->setObjectName(QString::fromUtf8("BtnClear"));

        gridLayout_5->addWidget(BtnClear, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_5->addWidget(plainTextEdit, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        splitter->addWidget(frame_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString\347\211\271\346\200\247Dome", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "front && bake", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", " left && right", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "first && last", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "size && length", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "isNull && isEmpty", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "trimmed && simplified", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        comboBoxStr2->setItemText(0, QCoreApplication::translate("Widget", "\\", nullptr));
        comboBoxStr2->setItemText(1, QCoreApplication::translate("Widget", "Qt", nullptr));
        comboBoxStr2->setItemText(2, QCoreApplication::translate("Widget", ".", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        comboBoxStr1->setItemText(0, QCoreApplication::translate("Widget", "D:\\download\\game\\daoyanmoniq\\DirectorSimulator", nullptr));
        comboBoxStr1->setItemText(1, QCoreApplication::translate("Widget", "Are you OK  ?", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        BtnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
