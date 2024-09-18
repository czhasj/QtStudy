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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAlign_Left_2;
    QPushButton *btnAlign_Center_2;
    QPushButton *btnAlign_Right_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnFont_Bold_2;
    QPushButton *btnFont_Italic_2;
    QPushButton *btnFont_UnderLine_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(391, 357);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAlign_Left_2 = new QPushButton(Widget);
        btnAlign_Left_2->setObjectName(QString::fromUtf8("btnAlign_Left_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon/align-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Left_2->setIcon(icon);
        btnAlign_Left_2->setCheckable(true);
        btnAlign_Left_2->setChecked(true);
        btnAlign_Left_2->setAutoExclusive(true);
        btnAlign_Left_2->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Left_2);

        btnAlign_Center_2 = new QPushButton(Widget);
        btnAlign_Center_2->setObjectName(QString::fromUtf8("btnAlign_Center_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon/align-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Center_2->setIcon(icon1);
        btnAlign_Center_2->setCheckable(true);
        btnAlign_Center_2->setAutoExclusive(true);
        btnAlign_Center_2->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Center_2);

        btnAlign_Right_2 = new QPushButton(Widget);
        btnAlign_Right_2->setObjectName(QString::fromUtf8("btnAlign_Right_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon/align-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Right_2->setIcon(icon2);
        btnAlign_Right_2->setCheckable(true);
        btnAlign_Right_2->setAutoExclusive(true);
        btnAlign_Right_2->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Right_2);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnFont_Bold_2 = new QPushButton(Widget);
        btnFont_Bold_2->setObjectName(QString::fromUtf8("btnFont_Bold_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icon/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Bold_2->setIcon(icon3);
        btnFont_Bold_2->setCheckable(true);
        btnFont_Bold_2->setChecked(false);
        btnFont_Bold_2->setAutoExclusive(false);
        btnFont_Bold_2->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Bold_2);

        btnFont_Italic_2 = new QPushButton(Widget);
        btnFont_Italic_2->setObjectName(QString::fromUtf8("btnFont_Italic_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icon/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Italic_2->setIcon(icon4);
        btnFont_Italic_2->setCheckable(true);
        btnFont_Italic_2->setAutoExclusive(false);
        btnFont_Italic_2->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Italic_2);

        btnFont_UnderLine_2 = new QPushButton(Widget);
        btnFont_UnderLine_2->setObjectName(QString::fromUtf8("btnFont_UnderLine_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icon/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_UnderLine_2->setIcon(icon5);
        btnFont_UnderLine_2->setCheckable(true);
        btnFont_UnderLine_2->setAutoExclusive(false);
        btnFont_UnderLine_2->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_UnderLine_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);
        checkBox_2->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_4->addWidget(radioButton_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setPointSize(15);
        lineEdit->setFont(font);

        verticalLayout_3->addWidget(lineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnAlign_Left_2->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        btnAlign_Center_2->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        btnAlign_Right_2->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        btnFont_Bold_2->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        btnFont_Italic_2->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        btnFont_UnderLine_2->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        groupBox->setTitle(QString());
        checkBox->setText(QCoreApplication::translate("Widget", "Readonly", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "Enabled", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "ClearbuttonEnabled", nullptr));
        groupBox_2->setTitle(QString());
        radioButton->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "Bule", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\347\224\250\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
