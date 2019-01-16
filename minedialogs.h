#ifndef MINEDIALOGS_H
#define MINEDIALOGS_H
#include "mineinclude.h"
#include "minepictures.h"

class CustomDialog:public QDialog
{
    Q_OBJECT
public:
    CustomDialog(QWidget *parent=0);
public slots:
    void setcval(int _w,int _h,int _b);
    void setself();
    void accept();
signals:
    cuschanged(int ww,int hh,int bb);
protected:
    QGridLayout *gl;
    QDialogButtonBox *buttonBox;
    QLabel *w;
    QLabel *h;
    QLabel *b;
    QSpinBox *sw;
    QSpinBox *sh;
    QSpinBox *sb;
    int cw,ch,cb;
};

class KernalDialog:public QDialog
{
    Q_OBJECT
public:
    KernalDialog(QWidget *parent=0);
public slots:
    void setkval(int _x,int _y,int _val);
    void setself();
    void accept();
signals:
    kchanged(int _x,int _y,int _val);
protected:
    QGridLayout *gl;
    QDialogButtonBox *buttonBox;
    QSpinBox *kk[5][5];
    int tk[5][5];
};


class RankDialog:public QDialog
{
    Q_OBJECT
public:
    RankDialog(const char* _fpp=NULL,QWidget *parent=0);
    ~RankDialog();
public slots:
    void setname(QString str,int _lv);
    void settime(int tmd,int _lv);
    virtual void readrank();
    virtual void writerank();
    void clearrank();
    int getrank(int _lv);
protected:
    void readitem(QLabel *qlp,int mod=0);
    void writeitem(QLabel *qlp);
    QGridLayout *gl;
    QPushButton *clr;
    QPushButton *ook;
    QLabel *lv1,*lv2,*lv3;
    QLabel *nm1,*nm2,*nm3;
    QLabel *tm1,*tm2,*tm3;
    int itime[3];
    FILE *fp;
    char fpp[32];
};

class RankName:public QDialog
{
    Q_OBJECT
public:
    RankName(QWidget *parent=0);
public slots:
    void accept();
signals:
    getname(QString str);
protected:
    QLineEdit nmm;
    QLabel gw;
    QDialogButtonBox *buttonBox;
    QGridLayout *gl;
};

class AGLabel:public QLabel
{
public:
    AGLabel(QWidget *parent=0);
protected:
    void paintEvent(QPaintEvent *);
};

class AboutM:public QDialog
{
public:
    AboutM(QWidget *parent=0);
protected:
    AGLabel ag;
    QLabel hhh;
    QPushButton qp;
};

#endif // MINEDIALOGS_H
