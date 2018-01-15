#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mainwindow.h"
#include "controller.h"

#include <QListWidgetItem>
#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QHash>

class Controller : public QObject
{
public:
    Controller(MainWindow * window, QObject *parent = 0);
    void setupSignals();
    void initialize();

private:
    MainWindow *m_window;
};

#endif // CONTROLLER_H
