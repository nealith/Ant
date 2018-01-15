#include "controller.h"

Controller::Controller(MainWindow *window, QObject *parent): QObject(parent), m_window(window)
{
    Q_ASSERT(nullptr != window);
}


void Controller::setupSignals()
{
//    connect(m_window, SIGNAL(newSimuClicked()), this, SLOT(createNewSimu()));
//    connect(m_window, SIGNAL(parameterOpenClicked()), this, SLOT(openParamWindow()));
//    connect(m_window, SIGNAL(openFileClicked()), this, SLOT(openFileManager()));
}

void Controller::initialize(){
    m_window->setupSignals();
    this->setupSignals();

    m_window->show();
}
