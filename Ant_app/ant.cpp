#include "ant.h"

Ant::Ant(AntHill * antHill, QGraphicsPixmapItem *parent) :
    QGraphicsPixmapItem(parent),
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

Anthill *Ant::anthill() const
{
    return m_anthill;
}

void Ant::setAnthill(Anthill *anthill)
{
    m_anthill = anthill;
}


