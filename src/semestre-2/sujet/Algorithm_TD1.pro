#-------------------------------------------------
#
# Project created by QtCreator 2019-02-03T21:14:48
#
#-------------------------------------------------

lessThan(QT_MAJOR_VERSION, 4): error("requires Qt>4")

QT       += core gui widgets

TARGET = Algorithm_TD1
TEMPLATE = app

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    array.cpp

HEADERS += \
        mainwindow.h \
    array.h
