#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnAlign_Left_2_clicked();

    void on_btnAlign_Center_2_clicked();

    void on_btnAlign_Right_2_clicked();

    void on_btnFont_Bold_2_clicked(bool checked);

    void on_btnFont_Italic_2_clicked(bool checked);

    void on_btnFont_UnderLine_2_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
