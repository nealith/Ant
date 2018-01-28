#-------------------------------------------------
#
# Project created by QtCreator 2018-01-16T08:33:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ANT2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    worker.cpp \
    soldier.cpp \
    queen.cpp \
    ant.cpp \
    anthill.cpp \
    pheromone.cpp \
    simulation.cpp \
    settings.cpp \
    controller.cpp \
    food.cpp

HEADERS += \
        mainwindow.h \
    anthill.h \
    soldier.h \
    worker.h \
    pheromone.h \
    simulation.h \
    queen.h \
    ant.h \
    settings.h \
    controller.h \
    food.h

FORMS += \
        mainwindow.ui \
    settings.ui
SUBDIRS += \
    ANT2.pro

DISTFILES += \
    ANT2.pro.user \
    resources/ant.png \
    resources/anthill.png \
    resources/food.png \
    resources/ant.svg \
    resources/anthill.svg \
    resources/bouff.svg

RESOURCES += \
    res.qrc
