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
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    connect(m_window, SIGNAL(addFoodClicked()), this, SLOT(onAddFood()));
}

void Controller::initialize(){
    m_window->setupSignals();
    this->setupSignals();

    m_window->setupScene(m_simulation);
    m_simulation->init();
    m_timer.start(m_speed_factor*m_speed_one);
    m_window->show();

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

}

void Controller::onAddFood(){
    m_simulation->addFood();
}

void Controller::onTimeout(){
    m_cycles++;
    m_simulation->advance(1);
    //m_timer.start(m_speed_factor*m_speed_one);
}
