#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QObject::connect(&w,SIGNAL(pushexit()),&a,SLOT(quit()));
    w.show();

    return a.exec();
}
