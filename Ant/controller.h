#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mainwindow.h"
#include "settings.h"

#include <QListWidgetItem>
#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QHash>
#include <QDialog>
#include <simulation.h>
#include <QTimer>

class Controller : public QObject
{
  Q_OBJECT
public:
    Controller(MainWindow * window,Settings * s, QObject *parent  = nullptr);
    void setupSignals();
    void initialize();
    ~Controller();

private:
    MainWindow *m_window;
    Settings *m_settings;
    QTimer m_timer;
    Simulation * m_simulation;
    qint64 m_cycles;
    qreal m_speed_factor;
    const qint32 m_speed_one =1000 ;

private slots:
    void createNewSimu();
    void openParamWindow();
    void openFileManager();
    void onTimeout();
};

#endif // CONTROLLER_H
