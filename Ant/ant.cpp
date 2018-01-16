#include "ant.h"
#include "simulation.h"

Ant::Ant(AntHill * antHill) :
    QGraphicsPixmapItem(),
    m_antHill(antHill),
    m_lifeCycles(0)
{
    this->setPos(antHill->pos());
}

void Ant::advance(int phase)
{
    m_lifeCycles++;
    Simulation::getInstance()->deleteAnt(this);
}

qint64 Ant::lifeCycles() const
{
    return m_lifeCycles;
}

void Ant::setLifeCycles(const qint64 &lifeCycles)
{
    m_lifeCycles = lifeCycles;
}

AntHill *Ant::antHill()
{
    return m_antHill;
}

void Ant::setAntHill(AntHill *anthill)
{
    m_antHill = anthill;
}


