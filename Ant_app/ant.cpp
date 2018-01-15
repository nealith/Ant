#include "ant.h"

Ant::Ant(QGraphicsPixmapItem *parent) : QGraphicsPixmapItem(parent)
{

}

Anthill *Ant::anthill() const
{
    return m_anthill;
}

void Ant::setAnthill(Anthill *anthill)
{
    m_anthill = anthill;
}


