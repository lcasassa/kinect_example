#-------------------------------------------------
#
# Project created by QtCreator 2012-04-14T13:01:24
#
#-------------------------------------------------

QT       += core gui

TARGET = main
TEMPLATE = app

INCLUDEPATH += /usr/include/ni
LIBS += -lOpenNI

#`pkg-config --cflags opencv` `pkg-config --libs opencv`
CONFIG += link_pkgconfig
PKGCONFIG = opencv

SOURCES += main.cpp\
        mainwindow.cpp\
        thread.cpp \
    pintor.cpp

HEADERS  += mainwindow.h \
    thread.h \
    pintor.h

FORMS    += mainwindow.ui
