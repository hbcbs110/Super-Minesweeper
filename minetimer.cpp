#include "minetimer.h"
Numberboard::Numberboard(QWidget *parent,int n):
    QLabel(parent),num(n)
{
    resize(60,30);
}

void Numberboard::clear()
{
    num=0;
    update();
}

void Numberboard::plus()
{
    ++num;
    update();
}

void Numberboard::minus()
{
    --num;
    update();
}

void Numberboard::plus(int n)
{
    num+=n;
    update();
}

int Numberboard::getnum()
{
    return num;
}

void Numberboard::setnm(int n)
{
    num=n;
    update();
}

void Numberboard::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    int n=num;
    if(n>=999) n=999;
    else if(n<=-99) n=-99;
    int n1=(abs(n)/100)%10,n2=(abs(n)/10)%10,n3=abs(n)%10;
    if(n<0) p.drawImage(0,0,Pictures::led[10]);
    else p.drawImage(0,0,Pictures::led[n1]);
    p.drawImage(20,0,Pictures::led[n2]);
    p.drawImage(40,0,Pictures::led[n3]);
}

myTimer::myTimer(QWidget *parent):
    Numberboard(parent),ttt(parent),
    running(0)
{
    connect(&ttt,SIGNAL(timeout()),this,SLOT(plus()));
}

void myTimer::start()
{
    if(!running)
    {
        running=1;
        ttt.start(1000);
    }
}

void myTimer::stop()
{
    ttt.stop();
    running=0;
}

void myTimer::reset()
{
    clear();
}
