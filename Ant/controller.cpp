#include "controller.h"
#include "ui_settings.h"
#include <QDebug>

Controller::Controller(MainWindow *window,Settings * s, QObject *parent):
  QObject(parent),
  m_window(window),
  m_settings(s),
  m_timer(),
  m_simulation(Simulation::getInstance()),
  m_cycles(0),
  m_speed_factor(1)
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

    //signaux pour les settings
    connect(m_settings, SIGNAL(paramValids()),this, SLOT(updateSimulationParams()));
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

void Controller::updateStatsFromSimulation(QList<AntHill *> l)
{

}

Controller::~Controller()
{
   delete m_simulation;
}

void Controller::createNewSimu(){
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
    //m_timer.start(m_speed_factor*m_speed_one);
}

void Controller::updateSimulationParams(){
    m_simulation->setFoodQueen(m_settings->getFoodQueen());
    m_simulation->setFoodAnt(m_settings->getFoodAnt());
    m_simulation->setAntLimit(m_settings->getAntLimit());
    m_simulation->setAntLifeTime(m_settings->getAntLifeTime());
}
