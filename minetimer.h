#ifndef MINETIMER_H
#define MINETIMER_H
#include "mineinclude.h"
#include "minepictures.h"


class Numberboard:public QLabel
{
    Q_OBJECT
public:
    Numberboard(QWidget *parent=0,int n=0);
public slots:
    void clear();
    void plus();
    void minus();
    void plus(int n);
    int getnum();
    void setnm(int n);
protected:
    int num;
    virtual void paintEvent(QPaintEvent *);
};

class myTimer:public Numberboard
{
    Q_OBJECT
public:
    myTimer(QWidget *parent=0);
public slots:
    void start();
    void stop();
    void reset();
protected:
    QTimer ttt;
    bool running;
};

#endif // MINETIMER_H
