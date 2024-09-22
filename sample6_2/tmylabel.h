#ifndef TMYLABEL_H
#define TMYLABEL_H

#include <QLabel>
#include <QObject>


class TMyLabel : public QLabel
{
    Q_OBJECT
public:
    TMyLabel(QWidget *parent=nullptr);
signals:
    void doubleClicked();
};

#endif // TMYLABEL_H
