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
    ant.cpp \
    antantenna.cpp \
    anthill.cpp \
    controller.cpp \
    food.cpp \
    main.cpp \
    mainwindow.cpp \
    pheromone.cpp \
    queen.cpp \
    settings.cpp \
    simulation.cpp \
    simulationitem.cpp \
    simulationpixmapitem.cpp \
    simulationview.cpp \
    soldier.cpp \
    worker.cpp



HEADERS += \
    ant.h \
    antantenna.h \
    anthill.h \
    controller.h \
    food.h \
    food_copy.h \
    mainwindow.h \
    pheromone.h \
    queen.h \
    settings.h \
    simulation.h \
    simulationitem.h \
    simulationpixmapitem.h \
    simulationview.h \
    soldier.h \
    worker.h

FORMS += \
    mainwindow.ui \
    settings.ui


SUBDIRS += \
    ANT2.pro

RESOURCES += \
    res.qrc

DISTFILES += \
    ANT2.pro.user \
    ANT2.pro.user.8a0cda3 \
    resources/ant.png \
    resources/anthill.png \
    resources/background.png \
    resources/food.png \
    resources/back_up/ant.png \
    resources/back_up/anthill.png \
    resources/back_up/food.png \
    resources/back_up/ant.svg \
    resources/back_up/anthill.svg \
    resources/back_up/bouff.svg


