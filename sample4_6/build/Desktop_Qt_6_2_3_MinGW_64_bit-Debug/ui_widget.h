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
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDial *dial;
    QLabel *label;
    QSlider *Slider;
    QLabel *label_2;
    QScrollBar *ScrollBar;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QProgressBar *progressBar;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QCheckBox *chkBox_Visible;
    QCheckBox *chkBox_Inverted;
    QRadioButton *radio_Percent;
    QRadioButton *radio_Value;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(453, 399);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dial = new QDial(groupBox);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(200);
        dial->setValue(25);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 0, 0, 2, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        Slider = new QSlider(groupBox);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setMaximum(200);
        Slider->setValue(25);
        Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Slider, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        ScrollBar = new QScrollBar(groupBox);
        ScrollBar->setObjectName(QString::fromUtf8("ScrollBar"));
        ScrollBar->setMaximum(200);
        ScrollBar->setValue(25);
        ScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ScrollBar, 1, 2, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(200);
        progressBar->setValue(25);

        horizontalLayout->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkBox_Visible = new QCheckBox(frame_2);
        chkBox_Visible->setObjectName(QString::fromUtf8("chkBox_Visible"));
        chkBox_Visible->setChecked(true);

        gridLayout_2->addWidget(chkBox_Visible, 0, 0, 1, 1);

        chkBox_Inverted = new QCheckBox(frame_2);
        chkBox_Inverted->setObjectName(QString::fromUtf8("chkBox_Inverted"));

        gridLayout_2->addWidget(chkBox_Inverted, 0, 1, 1, 1);

        radio_Percent = new QRadioButton(frame_2);
        radio_Percent->setObjectName(QString::fromUtf8("radio_Percent"));
        radio_Percent->setChecked(true);

        gridLayout_2->addWidget(radio_Percent, 1, 0, 1, 1);

        radio_Value = new QRadioButton(frame_2);
        radio_Value->setObjectName(QString::fromUtf8("radio_Value"));

        gridLayout_2->addWidget(radio_Value, 1, 1, 1, 1);


        verticalLayout->addWidget(frame_2);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241dome", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Progress Bar\346\230\276\347\244\272\344\270\216\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
        chkBox_Visible->setText(QCoreApplication::translate("Widget", "textVisible", nullptr));
        chkBox_Inverted->setText(QCoreApplication::translate("Widget", "invertedAppearance", nullptr));
        radio_Percent->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\347\231\276\345\210\206\346\257\224", nullptr));
        radio_Value->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\345\275\223\345\211\215\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
