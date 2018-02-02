#ifndef PHEROMONE_H
#define PHEROMONE_H

#include "simulationpixmapitem.h"
#include "anthill.h"
#include "ant.h"

class Pheromone: public SimulationPixmapItem
{
public:
    Pheromone(AntHill * antHill);
    static bool isPheromone(QGraphicsItem * e);

    AntHill * antHill() const;
    void advance(int phase);

    void stepOn(Ant * ant);

private:
    qreal m_value;
    qreal m_cycle;
    AntHill * m_antHill;

};

#endif // PHEROMONE_H
