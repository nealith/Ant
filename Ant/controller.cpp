#include "controller.h"
#include "ui_settings.h"

Controller::Controller(MainWindow *window,Settings * s, QObject *parent):
  QObject(parent),
  m_window(window),
  m_settings(s),
  m_timer(),
  m_simulation(Simulation::getInstance()),
  m_cycles(0)
{
    Q_ASSERT(nullptr != window);
}


void Controller::setupSignals()
{
    connect(m_window, SIGNAL(newSimuClicked()), this, SLOT(createNewSimu()));
    connect(m_window, SIGNAL(parameterOpenClicked()), this, SLOT(openParamWindow()));
    connect(m_window, SIGNAL(openFileClicked()), this, SLOT(openFileManager()));
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

void Controller::initialize(){
    m_window->setupSignals();
    this->setupSignals();

    m_timer.start(m_speed_factor*m_speed_one);
    m_window->show();

}

void Controller::createNewSimu(){
}

void Controller::openParamWindow(){
    m_settings->show();
}

void Controller::openFileManager(){

}

void Controller::onTimeout(){
    m_cycles++;
    m_simulation->advance(1);
    m_timer.start(m_speed_factor*m_speed_one);
}
