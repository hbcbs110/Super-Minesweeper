#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mineinclude.h"
#include "maingame.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void pushexit();
public slots:
    void closeme();
    void mapsize(int _w,int _h);
    void flagicon();
    void bombicon();
    void mainicon();
    void switchwasp();
    void mns(int l);
    void changelang();

private:
    //Ui::MainWindow *ui;
    /*菜单项：
     * 游戏：新游戏，继续、保存，初级、中级、高级，经典模式、骑士模式、大块模式、垂直模式，自定义，退出
     * 帮助：帮助，关于*/
    //Game: New Game, Continue Save, Beginner Intermediate Expert, Classic Knight...Custom, Quit
    //Help: Help, About...
    QAction *openAction;
    QAction *cont,*save;
    QAction *rank;
    QAction *lv1,*lv2,*lv3,*lvmx;
    QAction *classical;
    QAction *knight;
    QAction *ftf;
    QAction *chuz;
    QAction *chuzd;
    QAction *kite;
    QAction *duijiao;
    QAction *spider;
    QAction *qq1;
    QAction *qq2;
    QAction *hui;
    QAction *custom1;
    QAction *custom2;
    QAction *waspf;
    QAction *lang;
    QAction *exitt;
    QAction *help;
    QAction *about;
    QAction *sep;
    QActionGroup *agame,*alevel,*amode,*aexit,*awasp;
    MineGame mg;
    bool eng;

    //RankDialog rd;
};

#endif // MAINWINDOW_H
