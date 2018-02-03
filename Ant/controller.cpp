#include "controller.h"
#include "ui_settings.h"
#include <QDebug>

Controller::Controller(MainWindow *window,Settings * s, aPropos * ap, Manuel *m, QObject *parent):
  QObject(parent),
  m_window(window),
  m_settings(s),
  m_infos(ap),
  valls(m),
  m_timer(),
  m_simulation(Simulation::getInstance()),
  m_cycles(0),
  m_speed_factor(1),
  m_play(true)
{
    Q_ASSERT(nullptr != window);
}


void Controller::setupSignals()
{
    connect(m_window, SIGNAL(newSimuClicked()), this, SLOT(createNewSimu()));
    connect(m_window, SIGNAL(parameterOpenClicked()), this, SLOT(openParamWindow()));
    connect(m_window, SIGNAL(openFileClicked()), this, SLOT(openFileManager()));
    connect(m_window, SIGNAL(saveFileClicked()),this,SLOT(saveFile()));
    connect(m_window, SIGNAL(saveAsClicked()),this,SLOT(openSaveWindow()));
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    connect(m_window, SIGNAL(addFoodClicked()), this, SLOT(onAddFood()));
    connect(m_window, SIGNAL(speedChanged()),this,SLOT(changeSpeed()));
    connect(m_simulation,SIGNAL(ifoundFood()),this,SLOT(onFoodFound()));

    connect(m_window,SIGNAL(playPauseClicked()),this,SLOT(onPlayPause()));

    //signaux pour les settings
    connect(m_settings, SIGNAL(paramValids()),this, SLOT(updateSimulationParams()));
    connect(m_window,SIGNAL(moreInfo()),this,SLOT(onAskInfo()));
    connect(m_window,SIGNAL(showManual()),this,SLOT(onOpenManual()));
    connect(m_window,SIGNAL(antHillClicked()),this,SLOT(addNewAntHill()));
}

void Controller::initialize(){
    m_window->setupSignals();
    m_settings->setupSignals();
    this->setupSignals();

    m_window->setupScene(m_simulation);
    m_simulation->init();
    m_timer.start(m_speed_factor*m_speed_one);
    m_window->show();
    knowFilePath = false; //par defaut on a pas de simulation déjà ouverte
    filePath = "";
}

Controller::~Controller()
{
   delete m_simulation;
}

void Controller::createNewSimu(){
    auto rep = QMessageBox::warning(m_window, tr("Nouvelle Simulation?"),
                                   tr("Perdre la simulation actuelle pour en faire une nouvelle?"),
                                   QMessageBox::Yes | QMessageBox::No,
                                   QMessageBox::No);
    if (rep==QMessageBox::Yes){
        m_simulation->restart(m_settings);
    }
}

void Controller::openParamWindow(){
    m_settings->show();
}


void Controller::openFileManager(){
    //quand le fichier est ouvert
    qDebug() << "Opening file manager to choose file";
    filePath = QFileDialog::getOpenFileName(m_window,tr("Ouvrir une simulation"),"~",tr("Fichier de simulation (*.ant)"));
    qDebug() << filePath;
    if(filePath!=""){
        knowFilePath = true;
    }
}

void Controller::saveFile(){
    //we need to know if the file is previously saved
    if(!knowFilePath){
        qDebug() << "File not previously saved, open saving window";
        this->openSaveWindow();
    }
    else{
        //save file method
    }
}

void Controller::openSaveWindow(){
    qDebug() << "open Saving Window";
    filePath = QFileDialog::getSaveFileName(m_window,tr("Sauvegarder la simulation sous"),"~",tr("Fichier de simulation (*ant)"));
    qDebug() << filePath;
    if(filePath!=""){
        knowFilePath = true;
    }
}

void Controller::onAddFood(){
    m_simulation->addFood();
}

void Controller::onTimeout(){
    m_cycles++;
    m_simulation->advance(1);
    if(!m_play){
        m_timer.stop();
    }

}



void Controller::updateSimulationParams(){
    m_simulation->setFoodQueen(m_settings->getFoodQueen());
    m_simulation->setFoodAnt(m_settings->getFoodAnt());
    m_simulation->setAntLimit(m_settings->getAntLimit());
    m_simulation->setAntLifeTime(m_settings->getAntLifeTime());
    m_simulation->setRatioWorkerSoldier(m_settings->getRatioWorkerSoldier());
    m_simulation->restart(m_settings);
    m_timer.start(m_speed_factor*m_speed_one);
}

void Controller::changeSpeed(){
    this->m_speed_factor = m_window->getSpeedFactor();
    qDebug() << m_speed_factor;
}

void Controller::onAskInfo(){
    m_infos->show();
}
void Controller::onOpenManual(){
    valls->show();
}

void Controller::addNewAntHill(){
    m_simulation->dropAntHill(QPointF(m_simulation->w()/2.0,m_simulation->h()/2.0));
}

void Controller::onPlayPause()
{
    if(m_play){
        m_play = false;
    } else {
        m_play = true;
        m_timer.start(m_speed_factor*m_speed_one);
    }
}
