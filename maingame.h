#ifndef MAINGAME_H
#define MAINGAME_H
#include "mineinclude.h"
#include "mineblock.h"
#include "minetimer.h"
#include "minedialogs.h"
#define MCLASSICM 0
#define MKNIGHTM 1
#define MBLOCKM 2
#define MBRICKM 2
#define MCHUZM 3
#define MCOSTUMM 4
#define MCHUZDM 5
#define MKITEM 6
#define MDUIJIAOM 7
#define MSPIDERM 8
#define MQ1M 9
#define MQ2M 10
#define MHUIM 11

class Kernal:public QObject
{
    Q_OBJECT
public:
    Kernal();
    int val(int x,int y);
    int abval(int x,int y);
public slots:
    void classic();
    void knight();
    void brick();
    void chuz();
    void chuzd();
    void kite();
    void duijiao();
    void spider();
    void qqq1();
    void qqq2();
    void hui();
    void setval(int x,int y,int _v);
    void setabval(int x,int y,int _v);
    void setall(int arr[][5]);
    void gokernal();
signals:
    kgoit(int _x,int _y,int _val);
private:
    int k[5][5];
};

class MineGame:public QWidget
{
    Q_OBJECT

public:
    MineGame(QWidget *parent=0);
    ~MineGame();
public slots:
    void kernalit();
    void refresh(bool mode=0,int _x=-1,int _y=-1);
    void callmenew();
    void remap(int _x,int _y);
    void level1();
    void level2();
    void level3();
    void levelm();
    void renew(int _c,int _r,int _b);
    void processdig(int _x,int _y);
    void processdetect(int _x,int _y);
    void processmultyflag(int _x,int _y);
    void processdoom(int _x,int _y);
    void processranks();
    void getrankname(QString str);
    void facialchange(int emo);
    void callcus();
    void callker();
    void callrank();
    void callabout();
    void classic();
    void knight();
    void brick();
    void chuz();
    void chuzd();
    void kite();
    void duijiao();
    void spider();
    void qqq1();
    void qqq2();
    void hui();
    void leftpress();
    void rightpress();
    void switchwasp();
    int modequest();
    int getrow();
    int getcol();
    int getmode();
    int getlevel();
    void setlang(bool lg);
signals:
    win();
    lose();
    win(int);
    lose(int);
    mapsize(int,int); //mapsize(_w,_h)
    refreshed();
    minuslife(int);
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void readstatus();
    void writestatus();
private:
    static int col;
    static int row;
    static int bomb;
    static int currentlevel;
    Kernal k;
    Block *bl[40][50];
    CustomDialog cd;
    KernalDialog kd;
    RankDialog clrd;
    RankDialog krd;
    RankDialog brd;
    RankDialog chrd;
    RankDialog chdrd;
    RankDialog ktrd;
    RankDialog djrd;
    RankDialog sprd;
    RankDialog q1rd;
    RankDialog q2rd;
    RankDialog huird;
    RankName rnkn;
    QPushButton fb;
    myTimer tm;
    Numberboard nnb;
    bool started;
    bool pokerface;
    bool mulflag;
    bool waspmode;
    int openedblock;
    int currentmode;
    clock_t cst,ced;
    QString gname;
    AboutM amm;
    int lives;
};

#endif // MAINGAME_H
