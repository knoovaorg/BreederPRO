#-------------------------------------------------
#
# Project created by QtCreator 2014-09-23T11:50:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BreederPro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    genus.cpp \
    specie.cpp \
    subject.cpp \
    topmenu.cpp \
    Costanti.cpp

HEADERS  += mainwindow.h \
    genus.h \
    specie.h \
    subject.h \
    topmenu.h

FORMS    += mainwindow.ui \
    genus.ui \
    specie.ui \
    subject.ui \
    topmenu.ui

CONFIG += mobility
MOBILITY = 

