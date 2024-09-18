#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLabel;
class QProgressBar;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labFilie;
    QProgressBar *progressbar;
    QLabel *labInfo;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actFile_New_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_actFont_Bold_triggered(bool checked);

    void on_actFont_ltalic_triggered(bool checked);

    void on_actFont_UnderLine_triggered(bool checked);

    void on_fontSize_changed(int fontSize);

    void on_font_changed(const QFont &font);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
