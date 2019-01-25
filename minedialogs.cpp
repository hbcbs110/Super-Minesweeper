#include "minedialogs.h"

CustomDialog::CustomDialog(QWidget *parent):
    QDialog(parent),cw(10),ch(10),cb(10)
{
    setWindowTitle("自定义");
    gl=new QGridLayout(this);

    w=new QLabel("宽度：",this);
    h=new QLabel("高度：",this);
    b=new QLabel("雷数：",this);

    sw=new QSpinBox(this);
    sh=new QSpinBox(this);
    sb=new QSpinBox(this);

    sw->setRange(8,50);
    sw->setSingleStep(1);
    sw->setValue(10);
    sw->setWrapping(false);

    sh->setRange(8,40);
    sh->setSingleStep(1);
    sh->setValue(10);
    sh->setWrapping(false);

    sb->setRange(4,999);
    sb->setSingleStep(1);
    sb->setValue(10);
    sb->setWrapping(false);

    gl->addWidget(w,0,0);
    gl->addWidget(sw,0,1);
    gl->addWidget(h,1,0);
    gl->addWidget(sh,1,1);
    gl->addWidget(b,2,0);
    gl->addWidget(sb,2,1);

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
    gl->addWidget(buttonBox,3,0,1,2);

    setLayout(gl);
    gl->setSizeConstraint(QLayout::SetFixedSize);

    connect(sw,SIGNAL(valueChanged(int)),this,SLOT(setself()));
    connect(sh,SIGNAL(valueChanged(int)),this,SLOT(setself()));
    connect(sb,SIGNAL(valueChanged(int)),this,SLOT(setself()));
}

void CustomDialog::setcval(int _w, int _h, int _b)
{
    cw=_w,ch=_h,cb=_b;
    sw->setValue(cw);
    sh->setValue(ch);
    sb->setValue(cb);
    sw->setValue(cw);
    sh->setValue(ch);
    sb->setValue(cb);
}

void CustomDialog::setself()
{
    cw=sw->value();
    ch=sh->value();
    cb=sb->value();
}

void CustomDialog::accept()
{
    if(cb>(cw-1)*(ch-1)) cb=(cw-1)*(ch-1);
    emit cuschanged(cw,ch,cb);
    QDialog::accept();
}

void CustomDialog::setlang(bool lg)
{
    if(lg)
    {
        setWindowTitle("Customize");
        w->setText("Width: ");
        h->setText("Height: ");
        b->setText("Mines: ");
    }
    else{
        setWindowTitle("自定义");
        w->setText("宽度：");
        h->setText("高度：");
        b->setText("雷数：");
    }
}

KernalDialog::KernalDialog(QWidget *parent):
    QDialog(parent)
{
    setWindowTitle("自定义");
    gl=new QGridLayout(this);

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            kk[i][j]=new QSpinBox(this);
            kk[i][j]->setRange(0,10);
            kk[i][j]->setSingleStep(1);
            kk[i][j]->setValue(0);
            kk[i][j]->setWrapping(false);
            gl->addWidget(kk[i][j],i,j);
            tk[i][j]=0;
            connect(kk[i][j],SIGNAL(valueChanged(int)),this,SLOT(setself()));
        }
    }

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
    gl->addWidget(buttonBox,5,0,1,5);

    gl->setSizeConstraint(QLayout::SetFixedSize);

    setLayout(gl);

}

void KernalDialog::setkval(int _x,int _y,int _val)
{
    tk[_x][_y]=_val;
    kk[_x][_y]->setValue(_val);
}

void KernalDialog::setself()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            tk[i][j]=kk[i][j]->value();
        }
    }
}

void KernalDialog::accept()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            emit kchanged(i,j,tk[i][j]);
        }
    }
    QDialog::accept();
}

void KernalDialog::setlang(bool lg)
{
    if(lg)
    {
        setWindowTitle("Customize");
    }
    else{
        setWindowTitle("自定义");
    }
}

RankDialog::RankDialog(const char* _fpp,QWidget *parent):
    QDialog(parent),fp(NULL),eng(false)
{
    setWindowTitle("扫雷英雄榜");
    gl=new QGridLayout(this);

    clr=new QPushButton("清空",this);
    ook=new QPushButton("确定",this);

    lv1=new QLabel("初级",this);
    lv2=new QLabel("中级",this);
    lv3=new QLabel("高级",this);

    nm1=new QLabel("匿名",this);
    nm2=new QLabel("匿名",this);
    nm3=new QLabel("匿名",this);

    tm1=new QLabel("999秒",this);
    tm2=new QLabel("999秒",this);
    tm3=new QLabel("999秒",this);

    itime[0]=999;
    itime[1]=999;
    itime[2]=999;
    fpp[0]=0;

    gl->addWidget(lv1,0,0);
    gl->addWidget(lv2,1,0);
    gl->addWidget(lv3,2,0);
    gl->addWidget(nm1,0,1);
    gl->addWidget(nm2,1,1);
    gl->addWidget(nm3,2,1);
    gl->addWidget(tm1,0,2);
    gl->addWidget(tm2,1,2);
    gl->addWidget(tm3,2,2);

    gl->addWidget(clr,3,0,1,1);
    gl->addWidget(ook,3,2,1,1);

    gl->setSizeConstraint(QLayout::SetFixedSize);

    sprintf(fpp,_fpp);
    readrank();


    connect(ook,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(clr,SIGNAL(clicked(bool)),this,SLOT(clearrank()));

}

RankDialog::~RankDialog()
{
    writerank();
}

void RankDialog::setname(QString str,int _lv)
{
    if(_lv==0) nm1->setText(str);
    else if(_lv==1) nm2->setText(str);
    else if(_lv==2) nm3->setText(str);
}

void RankDialog::settime(int tmd,int _lv)
{
    itime[_lv]=tmd;
    QString str;
    if(eng) str.sprintf("%ds",tmd);
    else str.sprintf("%d秒",tmd);
    if(_lv==0) tm1->setText(str);
    else if(_lv==1) tm2->setText(str);
    else if(_lv==2) tm3->setText(str);
}

void RankDialog::readrank()
{
    fp=fopen(fpp,"r");
    if(fp==NULL) return;
    readitem(nm1,0);
    readitem(tm1,1);
    readitem(nm2,0);
    readitem(tm2,2);
    readitem(nm3,0);
    readitem(tm3,3);
    fclose(fp);
    fp=NULL;
}

void RankDialog::readitem(QLabel *qlp,int mod)
{
    if(fp==NULL) return;
    char tmp[80];
    QString qstr;
    string str;
    fgets(tmp,64,fp);
    str=tmp;
    str=str.substr(0,str.length()-1);
    qstr=QString::fromStdString(str);
    qlp->setText(qstr);
    if(mod)
    {
        int t=atoi(tmp);
        itime[mod-1]=t;
    }
}

void RankDialog::writerank()
{
    if(fpp[0]==0) return;
    fp=fopen(fpp,"w");
    writeitem(nm1);
    writeitem(tm1);
    writeitem(nm2);
    writeitem(tm2);
    writeitem(nm3);
    writeitem(tm3);
    fclose(fp);
    fp=NULL;
}

void RankDialog::writeitem(QLabel *qlp)
{
    if(fpp[0]==0) return;
    char tmp[80];
    QString qstr;
    string str;
    qstr=qlp->text();
    str=qstr.toStdString();
    str=str.substr(0,64);
    strcpy(tmp,str.c_str());
    tmp[64]=0;
    fputs(tmp,fp);
    fputs("\n",fp);
}

void RankDialog::clearrank()
{
    QString str1,str2;
    if(eng)
    {
        str1="Anonymous";
        str2="999s";
    }
    else{
        str1="匿名";
        str2="999秒";
    }

    nm1->setText(str1);
    nm2->setText(str1);
    nm3->setText(str1);

    tm1->setText(str2);
    tm2->setText(str2);
    tm3->setText(str2);

    itime[0]=999;
    itime[1]=999;
    itime[2]=999;
}

int RankDialog::getrank(int _lv)
{
    return itime[_lv];
}

void RankDialog::setlang(bool lg)
{
    eng=lg;
    if(lg)
    {
        setWindowTitle("Fastest Mine Sweepers");
        clr->setText("Reset");
        ook->setText("OK");

        lv1->setText("Beginner");
        lv2->setText("Intermediate");
        lv3->setText("Expert");
    }
    else{
        setWindowTitle("扫雷英雄榜");
        clr->setText("清空");
        ook->setText("确定");

        lv1->setText("初级");
        lv2->setText("中级");
        lv3->setText("高级");
    }
}

/*
ClassicRank::ClassicRank(QWidget *parent):
    RankDialog(parent)
{
    sprintf(fpp,"rclassic.dat");
    readrank();
}

ClassicRank::~ClassicRank()
{
    writerank();
}

KnightRank::KnightRank(QWidget *parent):
    RankDialog(parent)
{
    sprintf(fpp,"rknight.dat");
    readrank();
}

KnightRank::~KnightRank()
{
    writerank();
}

BlockRank::BlockRank(QWidget *parent):
    RankDialog(parent)
{
    sprintf(fpp,"rblock.dat");
    readrank();
}

BlockRank::~BlockRank()
{
    writerank();
}

ChuzRank::ChuzRank(QWidget *parent):
    RankDialog(parent)
{
    sprintf(fpp,"rchuz.dat");
    readrank();
}

ChuzRank::~ChuzRank()
{
    writerank();
}*/

RankName::RankName(QWidget *parent):
    QDialog(parent),nmm("匿名",this),gw(this)
{
    setWindowTitle("新纪录！");
    gw.setText("敢问尊姓大名：");
    gl=new QGridLayout(this);
    gl->addWidget(&gw,0,0,1,3);
    gl->addWidget(&nmm,1,0,1,2);
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    gl->addWidget(buttonBox,2,1,1,1);
    gl->setSizeConstraint(QLayout::SetFixedSize);
}

void RankName::accept()
{
    emit getname(nmm.text());
    QDialog::accept();
}

void RankName::setlang(bool lg)
{
    eng=lg;
    if(eng)
    {
        setWindowTitle("New High Score！");
        gw.setText("Congratulations! Please type in your name: ");
    }
    else{
        setWindowTitle("新纪录！");
        gw.setText("敢问尊姓大名：");
    }
}

AGLabel::AGLabel(QWidget *parent):
    QLabel(parent)
{
    resize(60+8,75+8);
    setStyleSheet("QLabel {border-width: 4px;\
                   border-style: inset;\
                   border-color: gray;}");
    update();
}

void AGLabel::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawImage(0+4,0+4,Pictures::ledag[0]);
    p.drawImage(30+4,0+4,Pictures::ledag[1]);
    p.drawImage(0+4,45+4,Pictures::emo[4]);
    p.drawImage(30+4,45+4,Pictures::emo[4]);
}

AboutM::AboutM(QWidget *parent):
    QDialog(parent),
    ag(this),hhh(this),qp(this)
{
    setWindowTitle("About");
    setWindowIcon(QIcon(QPixmap::fromImage(Pictures::bomb)));
    setFixedSize(500,250);
    qp.setText("Great");
    ag.setGeometry(40,40,ag.width(),ag.height());
    hhh.setGeometry(150,10,400,150);
    qp.setGeometry(210,180,80,40);
    QString str;
    str="Super Mine Sweeper v1.02 Beta  2019\n\n";
    str+="参考自一个已经挂了的MMO扫雷网站MienField。\n\n";
    str+="由扫雷爱好者hbcbs110兴趣使然制作。\n\n";
    str+="感谢试玩！Have fun~";
    hhh.setText(str);

    connect(&qp,SIGNAL(clicked(bool)),this,SLOT(accept()));
}
