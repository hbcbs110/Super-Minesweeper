#include "maingame.h"

int MineGame::col = 10;
int MineGame::row = 10;
int MineGame::bomb = 10;
int MineGame::currentlevel = 0;

Kernal::Kernal()
{
    classic();
}

int Kernal::val(int x,int y)
{
    return k[x][y];
}

int Kernal::abval(int x,int y)
{
    return k[x+2][y+2];
}

void Kernal::classic()
{
    memset(k,0,sizeof(k));
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            k[i][j]=1;
        }
    }
}

void Kernal::knight()
{
    memset(k,0,sizeof(k));
    k[0][1]=k[1][0]=1;
    k[0][3]=k[3][0]=1;
    k[1][4]=k[4][1]=1;
    k[3][4]=k[4][3]=1;
}

void Kernal::brick()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            k[i][j]=1;
        }
    }
}

void Kernal::chuz()
{
    memset(k,0,sizeof(k));
    k[1][2]=1,k[2][1]=1;
    k[3][2]=1,k[2][3]=1;
}

void Kernal::chuzd()
{
    chuz();
    k[0][2]=1,k[2][0]=1;
    k[4][2]=1,k[2][4]=1;
}

void Kernal::kite()
{
    classic();
    k[0][2]=1,k[2][0]=1;
    k[4][2]=1,k[2][4]=1;
}

void Kernal::duijiao()
{
    classic();
    k[0][0]=1,k[4][4]=1;
    k[0][4]=1,k[4][0]=1;
}

void Kernal::spider()
{
    kite();
    k[0][0]=1,k[4][4]=1;
    k[0][4]=1,k[4][0]=1;
}

void Kernal::qqq1()
{
    classic();
    k[4][4]=1;
}

void Kernal::qqq2()
{
    qqq1();
    k[4][3]=1;
}

void Kernal::hui()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i>0&&i<4&&j>0&&j<4) k[i][j]=0;
            else k[i][j]=1;
        }
    }
}

void Kernal::setval(int x,int y,int _v)
{
    k[x+2][y+2]=_v;
}

void Kernal::setabval(int x,int y,int _v)
{
    k[x][y]=_v;
}

void Kernal::setall(int arr[][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            k[i][j]=arr[i][j];
        }
    }
}

void Kernal::gokernal()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            emit kgoit(i,j,k[i][j]);
        }
    }
}

MineGame::MineGame(QWidget *parent):
    QWidget(parent),
    cd(this),kd(this),clrd("data\\rclassic.dat",this),krd("data\\rknight.dat",this),
    brd("data\\rblock.dat",this),chrd("data\\rchuz.dat",this),rnkn(this),amm(this),
    chdrd("data\\rchuzd.dat",this),ktrd("data\\rkite.dat",this),djrd("data\\rduijiao.dat",this),
    sprd("data\\rspider.dat",this),q1rd("data\\rq1.dat",this),q2rd("data\\rq2.dat",this),
    fb(this),tm(this),nnb(this,bomb),huird("data\\rhui.dat",this),
    started(false),pokerface(false),
    mulflag(true),waspmode(false),
    currentmode(0),lives(0)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    srand(time(NULL));
    readstatus();
    int winw=30+col*20,winh=95+row*20;
    emit mapsize(winw,winh);
    tm.setGeometry(10,40,tm.width(),tm.height());
    nnb.setGeometry(winw-70,40,nnb.width(),nnb.height());
    fb.setGeometry(winw/2-15,40,30,30);
    fb.setIcon(QIcon(QPixmap::fromImage(Pictures::emo[0])));
    for(int i=0;i<40;i++)
    {
        for(int j=0;j<50;j++)
        {
            bl[i][j]=new Block(this);
            bl[i][j]->setGeometry(15+j*20,80+i*20,20,20);
            bl[i][j]->setcor(i,j);
            connect(bl[i][j],SIGNAL(dug(int,int)),this,SLOT(processdig(int,int)));
            connect(bl[i][j],SIGNAL(detect(int,int)),this,SLOT(processdetect(int,int)));
            connect(bl[i][j],SIGNAL(doom(int,int)),this,SLOT(processdoom(int,int)));
            connect(bl[i][j],SIGNAL(multiflag(int,int)),this,SLOT(processmultyflag(int,int)));
            connect(bl[i][j],SIGNAL(enflag()),&nnb,SLOT(minus()));
            connect(bl[i][j],SIGNAL(deflag()),&nnb,SLOT(plus()));
            connect(this,SIGNAL(win()),bl[i][j],SLOT(dis()));
            connect(this,SIGNAL(lose()),bl[i][j],SLOT(dis()));
            connect(bl[i][j],SIGNAL(clickedL()),this,SLOT(leftpress()));
            connect(bl[i][j],SIGNAL(clickedR()),this,SLOT(rightpress()));
            if(i>=row||j>=col)
            {
                bl[i][j]->setVisible(false);
            }else{
                bl[i][j]->setVisible(true);
            }
        }
    }
    refresh();

    connect(&cd,SIGNAL(cuschanged(int,int,int)),this,SLOT(renew(int,int,int)));
    connect(&kd,SIGNAL(kchanged(int,int,int)),&k,SLOT(setabval(int,int,int)));
    connect(&k,SIGNAL(kgoit(int,int,int)),&kd,SLOT(setkval(int,int,int)));
    connect(&rnkn,SIGNAL(getname(QString)),this,SLOT(getrankname(QString)));
    connect(this,SIGNAL(win()),&tm,SLOT(stop()));
    connect(this,SIGNAL(lose()),&tm,SLOT(stop()));
    connect(&fb,SIGNAL(clicked(bool)),this,SLOT(callmenew()));
    connect(this,SIGNAL(win(int)),this,SLOT(facialchange(int)));
    connect(this,SIGNAL(lose(int)),this,SLOT(facialchange(int)));
    connect(this,SIGNAL(win()),this,SLOT(processranks()));
}

MineGame::~MineGame()
{
    writestatus();
}

void MineGame::kernalit()
{
    int i,j,ii,jj,kk;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            kk=0;
            if(!bl[i][j]->safe()) continue;
            for(ii=-2;ii<=2;ii++)
            {
                if(!waspmode&&(i+ii<0||i+ii>=row)) continue;
                for(jj=-2;jj<=2;jj++)
                {
                    if(!waspmode&&(j+jj<0||j+jj>=col)) continue;
                    kk+=bl[(i+ii+row)%row][(j+jj+col)%col]->bombquest()*k.abval(ii,jj);
                }
            }
            bl[i][j]->setnumber(kk);
        }
    }
}

void MineGame::refresh(bool mode,int _x,int _y)
{
    ced=clock();
    int i,j,rnd;
    for(i=0;i<40;++i)
    {
        if(mode&&i>=row) break;
        for(j=0;j<50;++j)
        {
            if(mode&&j>=col) break;
            if(i>=row||j>=col)
            {
                bl[i][j]->hide();
            }else{
                bl[i][j]->setbomb(0);
                //bl[i][j]->setstate(BUNKNOWN);
                bl[i][j]->refresh();
                bl[i][j]->show();
            }
        }
    }
    qDebug()<<"5050:"<<clock()-ced<<endl;
    if(bomb+bomb<=col*row)
    {
        rnd=bomb;
        while(rnd)
        {
            i=rand()%row,j=rand()%col;
            if(bl[i][j]->safe())
            {
                bl[i][j]->setbomb(1);
                rnd--;
            }
        }
    }else{
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                bl[i][j]->setbomb(1);
            }
        }
        rnd=row*col-bomb;
        while(rnd)
        {
            i=rand()%row,j=rand()%col;
            if(!bl[i][j]->safe())
            {
                bl[i][j]->setbomb(0);
                rnd--;
            }
        }
    }
    qDebug()<<"rndbomb:"<<clock()-ced<<endl;
    if(_x!=-1||_y!=-1)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(bl[i][j]->safe())
                {
                    bl[_x][_y]->setbomb(0);
                    bl[i][j]->setbomb(1);
                    i=row;
                    break;
                }
            }
        }
    }
    tm.stop();
    tm.reset();
    nnb.setnm(bomb);
    if(!waspmode) fb.setIcon(QIcon(QPixmap::fromImage(Pictures::emo[0])));
    else fb.setIcon(QIcon(QPixmap::fromImage(Pictures::wemo[0])));
    started=false;
    openedblock=0;
    pokerface=false;
    lives=0;
    if(currentmode==MBLOCKM)
    {
        lives=1+(currentlevel>=1)+(currentlevel==2)*3+(currentlevel==5)*4;
    }
    else if(currentmode==MSPIDERM)
    {
        lives=(currentlevel>=2);
    }
    kernalit();
    qDebug()<<"overall:"<<clock()-ced<<endl;
    emit refreshed();
}

void MineGame::callmenew()
{
    refresh(1);
}

void MineGame::remap(int _x,int _y)
{
    while(!bl[_x][_y]->safe())
    {
        refresh(1,_x,_y);
    }
    bl[_x][_y]->dig();
}

void MineGame::level1()
{
    renew(9,9,10);
    currentlevel=0;
}

void MineGame::level2()
{
    renew(16,16,40);
    currentlevel=1;
}

void MineGame::level3()
{
    if(currentmode==MBLOCKM) renew(30,16,81);
    else renew(30,16,99);
    currentlevel=2;
}

void MineGame::levelm()
{
    renew(50,40,500);
    currentlevel=5;
}

void MineGame::renew(int _c, int _r, int _b)
{
    col=_c,row=_r,bomb=_b,currentlevel=4;
    col=max(8,col);col=min(50,col);
    row=max(8,row);row=min(40,row);
    bomb=max(4,bomb);bomb=min(999,bomb);
    int winw=30+col*20,winh=95+row*20;
    emit mapsize(winw,winh);
    tm.setGeometry(10,40,tm.width(),tm.height());
    nnb.setGeometry(winw-70,40,nnb.width(),nnb.height());
    fb.setGeometry(winw/2-15,40,30,30);
    cd.setcval(col,row,bomb);
    cd.setcval(col,row,bomb);
    refresh();
}

void MineGame::processdig(int _x,int _y)
{
    if(!started)
    {
        started=true;
        tm.start();
    }
    ++openedblock;
    qDebug()<<"++openedblock "<<openedblock;
    if(openedblock>=col*row-bomb)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(!bl[i][j]->safe())
                {
                    bl[i][j]->setflag();
                }
                bl[i][j]->dis();
            }
        }
        emit win();
        emit win(4);
        pokerface=true;
        return;
    }
//    else if(openedblock>=col*row-bomb-2)
//    {
//        int tmpopen=0;
//        for(int i=0;i<row;i++)
//        {
//            for(int j=0;j<col;j++)
//            {
//                if(bl[i][j]->getstate()==BDIGGED)
//                {
//                    ++tmpopen;
//                }
//            }
//        }
//        qDebug()<<"corr "<<openedblock<<" "<<tmpopen<<endl;
//        if(openedblock<tmpopen) openedblock=tmpopen;
//        if(openedblock>=col*row-bomb)
//        {
//            for(int i=0;i<row;i++)
//            {
//                for(int j=0;j<col;j++)
//                {
//                    if(!bl[i][j]->safe())
//                    {
//                        bl[i][j]->setflag();
//                    }
//                    bl[i][j]->dis();
//                }
//            }
//            emit win();
//            emit win(4);
//            pokerface=true;
//            return;
//        }
//    }
    if(bl[_x][_y]->numquest()) return;
    for(int i=-2;i<=2;i++)
    {
        if(_x+i<0||_x+i>=row) continue;
        for(int j=-2;j<=2;j++)
        {
            if(_y+j<0||_y+j>=col) continue;
            if(k.abval(i,j)==0) continue;
            if(bl[_x+i][_y+j]->getstate()==BDIGGED) continue;
            bl[_x+i][_y+j]->dig();
        }
    }
    if(openedblock>=col*row-bomb)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(!bl[i][j]->safe())
                {
                    bl[i][j]->setflag();
                }
                bl[i][j]->dis();
            }
        }
        emit win();
    }
//    else if(openedblock>=col*row-bomb-2)
//    {
//        int tmpopen=0;
//        for(int i=0;i<row;i++)
//        {
//            for(int j=0;j<col;j++)
//            {
//                if(bl[i][j]->getstate()==BDIGGED)
//                {
//                    ++tmpopen;
//                }
//            }
//        }
//        qDebug()<<"corr "<<openedblock<<" "<<tmpopen<<endl;
//        if(openedblock<tmpopen) openedblock=tmpopen;
//        if(openedblock>=col*row-bomb)
//        {
//            for(int i=0;i<row;i++)
//            {
//                for(int j=0;j<col;j++)
//                {
//                    if(!bl[i][j]->safe())
//                    {
//                        bl[i][j]->setflag();
//                    }
//                    bl[i][j]->dis();
//                }
//            }
//            emit win();
//            emit win(4);
//            pokerface=true;
//            return;
//        }
//    }
}

void MineGame::processdetect(int _x, int _y)
{
    if(bl[_x][_y]->numquest()==0) return;
    int flagn=0,i,j;
    for(i=-2;i<=2;i++)
    {
        if(_x+i<0||_x+i>=row) continue;
        for(j=-2;j<=2;j++)
        {
            if(_y+j<0||_y+j>=col) continue;
            if(k.abval(i,j)==0) continue;
            if(bl[_x+i][_y+j]->getstate()==BFLAGGED) ++flagn;
        }
    }
    if(flagn==bl[_x][_y]->numquest())
    {
        for(i=-2;i<=2;i++)
        {
            if(_x+i<0||_x+i>=row) continue;
            for(j=-2;j<=2;j++)
            {
                if(_y+j<0||_y+j>=col) continue;
                if(k.abval(i,j)==0) continue;
                if(bl[_x+i][_y+j]->getstate()==BUNKNOWN)
                {
                    bl[_x+i][_y+j]->dig();
                }
            }
        }
    }else{
        for(i=-2;i<=2;i++)
        {
            if(_x+i<0||_x+i>=row) continue;
            for(j=-2;j<=2;j++)
            {
                if(_y+j<0||_y+j>=col) continue;
                if(k.abval(i,j)==0) continue;
                if(bl[_x+i][_y+j]->getstate()==BUNKNOWN||bl[_x+i][_y+j]->getstate()==BFLAGGED)
                {
                    bl[_x+i][_y+j]->nonetrigger();
                }
            }
        }
    }
}

void MineGame::processmultyflag(int _x, int _y)
{
    if(!mulflag) return;
    if(bl[_x][_y]->numquest()==0) return;
    int bln=0,i,j;
    for(i=-2;i<=2;i++)
    {
        if(_x+i<0||_x+i>=row) continue;
        for(j=-2;j<=2;j++)
        {
            if(_y+j<0||_y+j>=col) continue;
            if(k.abval(i,j)==0) continue;
            if(bl[_x+i][_y+j]->getstate()==BFLAGGED) ++bln;
            else if(bl[_x+i][_y+j]->getstate()==BUNKNOWN) ++bln;
        }
    }
    if(bln==bl[_x][_y]->numquest())
    {
        for(i=-2;i<=2;i++)
        {
            if(_x+i<0||_x+i>=row) continue;
            for(j=-2;j<=2;j++)
            {
                if(_y+j<0||_y+j>=col) continue;
                if(k.abval(i,j)==0) continue;
                if(bl[_x+i][_y+j]->getstate()==BUNKNOWN)
                {
                    bl[_x+i][_y+j]->flag();
                }
            }
        }
    }
}

void MineGame::processdoom(int _x,int _y)
{
    if(!started)
    {
        remap(_x,_y);
        started=true;
    }
    else{
        if(lives>0)
        {
            --lives;
            bl[_x][_y]->refresh();
            bl[_x][_y]->flag();
            emit minuslife(lives);
            return;
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(!bl[i][j]->safe())
                {
                    bl[i][j]->setbomb();
                }
                bl[i][j]->dis();
            }
        }
        tm.stop();
        started=false;
        emit lose();
        emit lose(2);
        pokerface=true;
    }
}

void MineGame::processranks()
{
    if(currentlevel>=3) return;
    int currenttime=tm.getnum(),record;
    RankDialog *rdrd;
    gname="";
    switch(currentmode)
    {
    case MCLASSICM:
        rdrd=&clrd;break;
    case MKNIGHTM:
        rdrd=&krd;break;
    case MBLOCKM:
        rdrd=&brd;break;
    case MCHUZM:
        rdrd=&chrd;break;
    case MCHUZDM:
        rdrd=&chdrd;break;
    case MKITEM:
        rdrd=&ktrd;break;
    case MDUIJIAOM:
        rdrd=&djrd;break;
    case MSPIDERM:
        rdrd=&sprd;break;
    case MQ1M:
        rdrd=&q1rd;break;
    case MQ2M:
        rdrd=&q2rd;break;
    case MHUIM:
        rdrd=&huird;break;
    default:return;
    }
    record=rdrd->getrank(currentlevel);
    if(currenttime>=record) return;
    rnkn.exec();
    if(gname.isEmpty()) return;
    rdrd->setname(gname,currentlevel);
    rdrd->settime(currenttime,currentlevel);
    rdrd->exec();
}

void MineGame::getrankname(QString str)
{
    gname=str;
}

void MineGame::facialchange(int emo)
{
    if(pokerface) return;
    if(waspmode) fb.setIcon(QIcon(QPixmap::fromImage(Pictures::wemo[emo])));
    else fb.setIcon(QIcon(QPixmap::fromImage(Pictures::emo[emo])));
}

void MineGame::callcus()
{
    cd.setcval(col,row,bomb);
    cd.setcval(col,row,bomb);
    cd.exec();
    refresh();
}

void MineGame::callker()
{
    currentmode=MCOSTUMM;
    k.gokernal();
    kd.exec();
    refresh();
}

void MineGame::callrank()
{
    switch(currentmode)
    {
    case MCLASSICM:
        clrd.exec();break;
    case MKNIGHTM:
        krd.exec();break;
    case MBLOCKM:
        brd.exec();break;
    case MCHUZM:
        chrd.exec();break;
    case MCHUZDM:
        chdrd.exec();break;
    case MKITEM:
        ktrd.exec();break;
    case MDUIJIAOM:
        djrd.exec();break;
    case MSPIDERM:
        sprd.exec();break;
    case MQ1M:
        q1rd.exec();break;
    case MQ2M:
        q2rd.exec();break;
    case MHUIM:
        huird.exec();break;
    default:return;
    }
}

void MineGame::callabout()
{
    amm.exec();
}

void MineGame::classic()
{
    currentmode=MCLASSICM;
    k.classic();
    refresh();
}

void MineGame::knight()
{
    currentmode=MKNIGHTM;
    k.knight();
    refresh();
}

void MineGame::brick()
{
    currentmode=MBLOCKM;
    k.brick();
    refresh();
}

void MineGame::chuz()
{
    currentmode=MCHUZM;
    k.chuz();
    refresh();
}

void MineGame::chuzd()
{
    currentmode=MCHUZDM;
    k.chuzd();
    refresh();
}

void MineGame::kite()
{
    currentmode=MKITEM;
    k.kite();
    refresh();
}

void MineGame::duijiao()
{
    currentmode=MDUIJIAOM;
    k.duijiao();
    refresh();
}

void MineGame::spider()
{
    currentmode=MSPIDERM;
    k.spider();
    refresh();
}

void MineGame::qqq1()
{
    currentmode=MQ1M;
    k.qqq1();
    refresh();
}

void MineGame::qqq2()
{
    currentmode=MQ2M;
    k.qqq2();
    refresh();
}

void MineGame::hui()
{
    currentmode=MHUIM;
    k.hui();
    refresh();
}

void MineGame::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton) leftpress();
    else rightpress();
}

void MineGame::mouseReleaseEvent(QMouseEvent *e)
{
    facialchange(0);
}

void MineGame::leftpress()
{
    facialchange(1);
}

void MineGame::rightpress()
{
    facialchange(3);
}

void MineGame::switchwasp()
{
    waspmode=!waspmode;
    refresh();
}

int MineGame::modequest()
{
    return currentmode;
}

int MineGame::getrow()
{
    return row;
}

int MineGame::getcol()
{
    return col;
}

int MineGame::getmode()
{
    return currentmode;
}

int MineGame::getlevel()
{
    return currentlevel;
}

void MineGame::readstatus()
{
    int ktmp[5][5],i,j;
    FILE *fp=NULL;
    fp=fopen("mrg.dat","r");
    if(fp==NULL) return;
    fscanf(fp,"%04x%04x%04x%04x%04x",&col,&row,&bomb,&currentlevel,&currentmode);
    col=max(8,col);col=min(50,col);
    row=max(8,row);row=min(40,row);
    bomb=max(4,bomb);bomb=min(999,bomb);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            fscanf(fp,"%04x",&ktmp[i][j]);
            ktmp[i][j]=max(0,ktmp[i][j]);
            ktmp[i][j]=min(10,ktmp[i][j]);
            k.setabval(i,j,ktmp[i][j]);
        }
    }
    fclose(fp);
    fp=NULL;
}

void MineGame::writestatus()
{
    FILE *fp=NULL;
    fp=fopen("mrg.dat","w");
    if(fp==NULL) return;
    fprintf(fp,"%04x %04x %04x %04x %04x",col,row,bomb,currentlevel,currentmode);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            fprintf(fp," %04x",k.val(i,j));
        }
    }
    fclose(fp);
    fp=NULL;
}
