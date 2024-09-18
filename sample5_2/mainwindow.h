#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class Qlabel;
class QStandardItemModel;
class QItemSelectionModel;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    const int FixedColumnCount=6;
    Qlabel *labCurFlie;
    Qlabel *labCellPos;
    Qlabel *labCellText;

    QStandardItemModel *m_model;
    QItemSelectionModel *m_selection;



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
