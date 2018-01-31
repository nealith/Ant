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
}

void Controller::initialize(){
    m_window->setupSignals();
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

void Controller::onTimeout(){
    m_cycles++;
    m_simulation->advance(1);
    //m_timer.start(m_speed_factor*m_speed_one);
}
