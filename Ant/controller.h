#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mainwindow.h"
#include "settings.h"
#include "apropos.h"
#include "manuel.h"

#include <QListWidgetItem>
#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QHash>
#include <QDialog>
#include <simulation.h>
#include <QTimer>
#include <QFileDialog>
#include <QMessageBox>

#include <anthill.h>

class Controller : public QObject
{
  Q_OBJECT
public:
    Controller(MainWindow * window,Settings * s, aPropos * ap, Manuel * m, QObject *parent  = nullptr);
    void setupSignals();
    void initialize();
    ~Controller();

private:
    bool knowFilePath;
    QString filePath;
    MainWindow *m_window;
    aPropos * m_infos;
    Settings *m_settings;
    Manuel * valls;
    QTimer m_timer;
    Simulation * m_simulation;
    qint64 m_cycles;
    qreal m_speed_factor;
    bool m_play;
    const qint32 m_speed_one =40 ;
private slots:
    void createNewSimu();
    void openParamWindow();
    void openFileManager();
    void onTimeout();
    void onAddFood();
    void openSaveWindow();
    void saveFile();
    void updateSimulationParams();
    void changeSpeed();
    void onAskInfo();
    void onOpenManual();
    void addNewAntHill();
    void onPlayPause();
};

#endif // CONTROLLER_H
