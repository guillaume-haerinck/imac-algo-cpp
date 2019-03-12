#-------------------------------------------------
#
# Project created by QtCreator 2019-02-03T21:14:48
#
#-------------------------------------------------

lessThan(QT_MAJOR_VERSION, 4): error("requires Qt>4")

QT       += core gui widgets

TARGET = Algorithm_TD2_exo6
TEMPLATE = app
CONFIG += c++11

SOURCES += \
        exo6.cpp \
        ../tp-1/lib/mainwindow.cpp \
	../tp-1/lib/array.cpp

HEADERS += \
        ../tp-1/lib/mainwindow.h \
	../tp-1/lib/array.h
