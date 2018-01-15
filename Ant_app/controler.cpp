#include "controler.h"

Controler::Controler(QObject *parent) : QObject(parent),
  m_scene(),
  m_timer(),
  m_simulation(),
  m_cycles(0)
{
    m_scene.addItem(m_simulation);

}

void Controler::init()
{








    connect(m_timer, SIGNAL(timeout()),this,SLOT(onTimeout()));
    m_timer.start(1000);

}

void Controler::onTimeout(){
    m_cycles++;
    m_scene.advance();
}

