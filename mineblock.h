#ifndef MINEBLOCK_H
#define MINEBLOCK_H
#include "mineinclude.h"
#include "minepictures.h"
#define BBLANK 0
#define BDIGGED 1
#define BFLAGGED 2
#define BUNKNOWN 3


class ClickLabel:public QLabel
{
    Q_OBJECT
public:
    ClickLabel(QWidget* parent=0);
signals:
    clickedL();
    clickedR();
protected:
    void mousePressEvent(QMouseEvent *e);
};

class Block:public ClickLabel
{
    Q_OBJECT
public:
    Block(QWidget* parent=0,int _state=BUNKNOWN);
    void setstate(int _s);
    void setcor(int _x,int _y);
    void setbomb(int _b);
    void setflag();
    void setnumber(int n);
    int bombquest();
    int numquest();
    int getstate();
    void setbomb();
public slots:
    void refresh();
    void flag();
    void dig();
    bool safe();
    void dis();
    void nonetrigger();
    void denonetrigger();
signals:
    dug();  //挖开一块砖
    dug(int _x,int _y);
    detect();  //挖开一片砖
    detect(int _x,int _y);
    multiflag();  //插上一片旗
    multiflag(int _x,int _y);
    enflag();  //flag++
    deflag();  //flag--
    doom();    //bomb
    doom(int _x,int _y);
private:
    void setblank();
    void setnumber();
    void setnormal();
    int state;
    int bomb;
    int x,y;
    bool ab;
    QTimer ttt;
};

#endif // MINEBLOCK_H
