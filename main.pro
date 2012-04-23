#-------------------------------------------------
#
# Project created by QtCreator 2012-04-14T13:01:24
#
#-------------------------------------------------

QT       += core gui

TARGET = main
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp\
        thread.cpp\
        pintor.cpp\
        serial.cpp\
        quadrotor.cpp

HEADERS  += mainwindow.h\
        thread.h\
        pintor.h\
        serial.h\
        quadrotor.h

FORMS    += mainwindow.ui

#openni
INCLUDEPATH += /usr/include/ni
LIBS += -lOpenNI

#opencv
CONFIG += link_pkgconfig
PKGCONFIG = opencv

#qextserialport
 unix:LIBS += -lqextserialport
