#-------------------------------------------------
#
# Project created by QtCreator 2018-02-25T16:32:44
#
#-------------------------------------------------

QT       += core gui
RC_ICONS = mineicon.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = superminesweeper
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    maingame.cpp \
    minepictures.cpp \
    minetimer.cpp \
    mineblock.cpp \
    minedialogs.cpp

HEADERS  += mainwindow.h \
    mineinclude.h \
    maingame.h \
    minepictures.h \
    minetimer.h \
    mineblock.h \
    minedialogs.h

FORMS    += mainwindow.ui
