#include "mineblock.h"

ClickLabel::ClickLabel(QWidget *parent):QLabel(parent){}

void ClickLabel::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton) emit clickedL();
    else emit clickedR();
}

Block::Block(QWidget *parent, int _state):ClickLabel(parent),
    state(_state),bomb(0),x(0),y(0),ab(1),ttt(this)
{
    resize(20,20);
    setnormal();
    connect(this,SIGNAL(clickedL()),this,SLOT(dig()));
    connect(this,SIGNAL(clickedR()),this,SLOT(flag()));
    //connect(&ttt,SIGNAL(timeout()),this,SLOT(refresh()));
}

void Block::setstate(int _s)
{
    state=_s;
    switch(_s)
    {
    case BBLANK:
        setblank();break;
    case BDIGGED:
        setnumber();break;
    case BFLAGGED:
        setflag();break;
    case BUNKNOWN:
        setnormal();break;
    default: return;
    }
}

void Block::setcor(int _x, int _y)
{
    x=_x,y=_y;
}

void Block::setbomb(int _b)
{
    bomb=-_b;
}

void Block::setnumber(int n)
{
    bomb=n;
}

int Block::bombquest()
{
    if(bomb>=0) return 0;
    else return -bomb;
}

int Block::numquest()
{
    return bomb;
}

int Block::getstate()
{
    return state;
}

void Block::refresh()
{
    resize(20,20);
    setnormal();
    state=BUNKNOWN;
    ab=1;
}

void Block::flag()
{
    if(!ab) return;
    switch(state)
    {
    case BBLANK:break;
    case BDIGGED:
        emit multiflag(x,y);break;
    case BFLAGGED:
        state=BUNKNOWN;
        setnormal();
        emit deflag();
        break;
    case BUNKNOWN:
        state=BFLAGGED;
        setflag();
        emit enflag();
        break;
    default: return;
    }
}

void Block::dig()
{
    if(!ab) return;
    switch(state)
    {
    case BBLANK:break;
    case BDIGGED:
        emit detect(x,y);
        emit detect();
        break;
    case BFLAGGED:break;
    case BUNKNOWN:
        if(safe())
        {
            if(bomb)
            {
                setnumber();
                state=BDIGGED;
                emit dug(x,y);
                emit dug();
            }else{
                setblank();
                state=BDIGGED;
                emit dug(x,y);
                emit dug();
            }
            state=BDIGGED;
        }else{
            state=BDIGGED;
            setbomb();
            emit doom(x,y);
            emit doom();
        }
    default: return;
    }
}

bool Block::safe()
{
    return bomb>=0;
}

void Block::dis()
{
    ab=0;
}

void Block::nonetrigger()
{
    if(state!=BUNKNOWN&&state!=BFLAGGED) return;
    setStyleSheet("QLabel {border-width: 2px;\
                   border-style: inset;\
                   border-color: gray;\
                   background-color: rgb(180,180,185);}");
    ttt.singleShot(100,this,SLOT(denonetrigger()));
}

void Block::denonetrigger()
{
    if(state==BFLAGGED) setflag();
    else refresh();
}

void Block::setblank()
{
    clear();
    setStyleSheet("QLabel {border-width: 1px;\
                   border-style: solid;\
                   border-color: black;\
                   background-color: rgb(245,245,245);}");
}

void Block::setnumber()
{
    setblank();
    char s[5]={0};
    sprintf(s,"%d",bomb);
    QString ss(s);
    setText(ss);
    QFont f("Microsoft YaHei",8,QFont::Bold);
    setFont(f);
    //setAlignment(Qt::AlignHCenter);
    setAlignment(Qt::AlignCenter);
}

void Block::setbomb()
{
    setblank();
    setPixmap(QPixmap::fromImage(Pictures::bomb));
}

void Block::setnormal()
{
    clear();
    setStyleSheet("QLabel {border-width: 2px;\
                   border-style: outset;\
                   border-color: gray;\
                   background-color: rgb(200,200,200);}");
}

void Block::setflag()
{
    clear();
    setPixmap(QPixmap::fromImage(Pictures::flag));
    setStyleSheet("QLabel {border-width: 2px;\
                   border-style: outset;\
                   border-color: gray;}");
}
