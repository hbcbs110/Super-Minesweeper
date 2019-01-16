#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),mg(this)//,rd(this)
    //ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    setWindowTitle(tr("SuperMineSweeper"));
    setStyleSheet("QMainWindow{background-color:rgb(225,225,225)}");

    openAction = new QAction(QIcon(":/images/doc-open"), tr("&新游戏"), this);
    openAction->setStatusTip(tr("新一局游戏"));
    //connect(openAction, &QAction::triggered, this, &MainWindow::open);
    cont = new QAction(tr("&继续"),this);
    cont->setStatusTip(tr("继续之前保存的游戏"));
    cont->setEnabled(false);
    save = new QAction(tr("&保存"),this);
    save->setStatusTip(tr("保存当前的游戏"));
    save->setEnabled(false);
    rank = new QAction(tr("&英雄榜"),this);
    rank->setStatusTip(tr("扫雷的英雄们何在"));
    //rank->setEnabled(false);
    lv1 = new QAction(tr("&初级"),this);
    lv2 = new QAction(tr("&中级"),this);
    lv3 = new QAction(tr("&高级"),this);
    lvmx = new QAction(tr("&Max"),this);
    custom1 = new QAction(tr("&自定义"),this);
    custom1->setStatusTip(tr("自定义难度"));
    lv1->setCheckable(true);
    lv2->setCheckable(true);
    lv3->setCheckable(true);
    lv3->setCheckable(true);
    lvmx->setCheckable(true);
    custom1->setCheckable(true);
    lv1->setChecked(mg.getlevel()==0);
    lv2->setChecked(mg.getlevel()==1);
    lv3->setChecked(mg.getlevel()==2);
    custom1->setChecked(mg.getlevel()==3);
    lvmx->setChecked(mg.getlevel()==5);
    classical = new QAction(tr("&经典模式"));
    classical->setStatusTip(tr("经典扫雷的游戏模式"));
    knight = new QAction(tr("&骑士模式"));
    knight->setStatusTip(tr("像骑士一样向跳字对角探测八个地方"));
    ftf = new QAction(tr("&大块模式"),this);
    ftf->setStatusTip(tr("将视野拓宽到五五见方的大格内"));
    chuz = new QAction(tr("&垂直模式"),this);
    chuz->setStatusTip(tr("尝试一下更友好的十字"));
    custom2 = new QAction(tr("&自定义"),this);
    custom2->setStatusTip(tr("自定义模式"));
    chuzd = new QAction(tr("垂直模式（大）"),this);
    chuzd->setStatusTip(tr("更大的十字"));
    kite = new QAction(tr("菱形"),this);
    kite->setStatusTip(tr("菱形挖掘"));
    duijiao = new QAction(tr("对角"),this);
    spider = new QAction(tr("蜘蛛"),this);
    spider->setStatusTip(tr("来雷区作爬虫"));
    qq1 = new QAction(tr("Q1模式"),this);
    qq2 = new QAction(tr("Q2模式"),this);
    hui = new QAction(tr("回"),this);
    classical->setCheckable(true);
    knight->setCheckable(true);
    ftf->setCheckable(true);
    chuz->setCheckable(true);
    custom2->setCheckable(true);
    chuzd->setCheckable(true);
    kite->setCheckable(true);
    duijiao->setCheckable(true);
    spider->setCheckable(true);
    qq1->setCheckable(true);
    qq2->setCheckable(true);
    hui->setCheckable(true);
    classical->setChecked(mg.getmode()==MCLASSICM);
    knight->setChecked(mg.getmode()==MKNIGHTM);
    ftf->setChecked(mg.getmode()==MBRICKM);
    chuz->setChecked(mg.getmode()==MCHUZM);
    custom2->setChecked(mg.getmode()==MCOSTUMM);
    chuzd->setChecked(mg.getmode()==MCHUZDM);
    kite->setChecked(mg.getmode()==MKITEM);
    duijiao->setChecked(mg.getmode()==MDUIJIAOM);
    spider->setChecked(mg.getmode()==MSPIDERM);
    qq1->setChecked(mg.getmode()==MQ1M);
    qq2->setChecked(mg.getmode()==MQ2M);
    hui->setChecked(mg.getmode()==MHUIM);
    exitt = new QAction(tr("&退出"),this);
    exitt->setStatusTip(tr("结束游戏"));
    connect(exitt,SIGNAL(triggered()),this,SLOT(closeme()));

    help = new QAction(tr("帮助"),this);
    about = new QAction(tr("&关于"),this);
    waspf = new QAction(tr("WASPFIELD"),this);
    waspf->setCheckable(true);
    waspf->setChecked(false);
    waspf->setStatusTip(tr("Get to the Wasp Field!"));

    agame = new QActionGroup(this);
    alevel = new QActionGroup(this);
    amode = new QActionGroup(this);
    aexit = new QActionGroup(this);
    awasp = new QActionGroup(this);
    agame->addAction(openAction);
    agame->addAction(cont);
    agame->addAction(save);
    agame->addAction(rank);
    agame->setExclusive(false);
    alevel->addAction(lv1);
    alevel->addAction(lv2);
    alevel->addAction(lv3);
    alevel->addAction(lvmx);
    alevel->addAction(custom1);
    amode->addAction(classical);
    amode->addAction(knight);
    amode->addAction(ftf);
    amode->addAction(chuz);
    sep = new QAction(this);
    sep->setSeparator(true);
    amode->addAction(sep);
    amode->addAction(chuzd);
    amode->addAction(kite);
    amode->addAction(duijiao);
    amode->addAction(spider);
    amode->addAction(qq1);
    amode->addAction(qq2);
    amode->addAction(hui);
    sep = new QAction(this);
    sep->setSeparator(true);
    amode->addAction(sep);
    amode->addAction(custom2);
    aexit->addAction(exitt);
    awasp->addAction(waspf);

    QMenu *mgame = menuBar()->addMenu(tr("&游戏"));
    QMenu *mhelp = menuBar()->addMenu(tr("&帮助"));
    mgame->addActions(agame->actions());

    QMenu *mdiff = mgame->addMenu(tr("&难度"));
    QMenu *mmode = mgame->addMenu(tr("&模式"));
    mdiff->addActions(alevel->actions());
    mmode->addActions(amode->actions());
    sep = new QAction(this);
    sep->setSeparator(true);
    mgame->addAction(sep);
    mgame->addActions(awasp->actions());
    sep = new QAction(this);
    sep->setSeparator(true);
    mgame->addAction(sep);
    mgame->addActions(aexit->actions());
    mhelp->addAction(help);
    mhelp->addAction(about);

    //statusBar()->setStyleSheet("QStatusBar{background:white;}");
    statusBar()->show();

    mg.move(0,0);
    mg.setGeometry(0,0,1500,1500);
    mg.show();

    int winw=30+mg.getcol()*20,winh=95+mg.getrow()*20;
    mapsize(winw,winh);
    connect(&mg,SIGNAL(mapsize(int,int)),this,SLOT(mapsize(int,int)));
    connect(openAction,SIGNAL(triggered(bool)),&mg,SLOT(callmenew()));
    connect(custom1,SIGNAL(triggered(bool)),&mg,SLOT(callcus()));
    connect(custom2,SIGNAL(triggered(bool)),&mg,SLOT(callker()));
    connect(lv1,SIGNAL(triggered(bool)),&mg,SLOT(level1()));
    connect(lv2,SIGNAL(triggered(bool)),&mg,SLOT(level2()));
    connect(lv3,SIGNAL(triggered(bool)),&mg,SLOT(level3()));
    connect(lvmx,SIGNAL(triggered(bool)),&mg,SLOT(levelm()));

    connect(classical,SIGNAL(triggered(bool)),&mg,SLOT(classic()));
    connect(knight,SIGNAL(triggered(bool)),&mg,SLOT(knight()));
    connect(ftf,SIGNAL(triggered(bool)),&mg,SLOT(brick()));
    connect(chuz,SIGNAL(triggered(bool)),&mg,SLOT(chuz()));
    connect(chuzd,SIGNAL(triggered(bool)),&mg,SLOT(chuzd()));
    connect(kite,SIGNAL(triggered(bool)),&mg,SLOT(kite()));
    connect(duijiao,SIGNAL(triggered(bool)),&mg,SLOT(duijiao()));
    connect(spider,SIGNAL(triggered(bool)),&mg,SLOT(spider()));
    connect(qq1,SIGNAL(triggered(bool)),&mg,SLOT(qqq1()));
    connect(qq2,SIGNAL(triggered(bool)),&mg,SLOT(qqq2()));
    connect(hui,SIGNAL(triggered(bool)),&mg,SLOT(hui()));

    connect(rank,SIGNAL(triggered(bool)),&mg,SLOT(callrank()));
    connect(about,SIGNAL(triggered(bool)),&mg,SLOT(callabout()));

    connect(waspf,SIGNAL(triggered(bool)),this,SLOT(switchwasp()));

    connect(&mg,SIGNAL(refreshed()),this,SLOT(mainicon()));
    connect(&mg,SIGNAL(win()),this,SLOT(flagicon()));
    connect(&mg,SIGNAL(lose()),this,SLOT(bombicon()));
    connect(&mg,SIGNAL(minuslife(int)),this,SLOT(mns(int)));
    //flagicon();
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::closeme()
{
    emit pushexit();
}

void MainWindow::mapsize(int _w, int _h)
{
    setFixedSize(_w,_h+30);
}

void MainWindow::flagicon()
{
    setWindowIcon(QIcon(QPixmap::fromImage(Pictures::flag)));
}

void MainWindow::bombicon()
{
    setWindowIcon(QIcon(QPixmap::fromImage(Pictures::bomb)));
}

void MainWindow::mainicon()
{
    setWindowIcon(QIcon(QPixmap::fromImage(Pictures::mico)));
}

void MainWindow::switchwasp()
{
    static bool wasped=false;
    wasped=!wasped;
    waspf->setChecked(wasped);
    mg.switchwasp();
}

void MainWindow::mns(int l)
{
    QString str;
    for(int i=0;i<l;i++) str+="♥";
    str+="♡";
    statusBar()->showMessage(str,4000);
}
