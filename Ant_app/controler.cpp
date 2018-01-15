#include "controler.h"

<<<<<<< HEAD
Controler::Controler(QObject *parent) : QObject(parent),
  m_scene(),
=======
Controler::Controler(QObject *parent) : QObject(parent):
>>>>>>> 20d0141264a254ec6f025130656bb4397ae0cf35
  m_timer(),
  m_simulation(),
  m_cycles(0)
{

}

void Controler::init()
{








    connect(m_timer, SIGNAL(timeout()),this,SLOT(onTimeout()));
    m_timer.start(m_speed_factor*m_speed_one);

}

void Controler::onTimeout(){
    m_cycles++;
    m_simulation.advance();
    m_timer.start(m_speed_factor*m_speed_one);
}

