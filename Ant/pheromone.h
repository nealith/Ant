#ifndef PHEROMONE_H
#define PHEROMONE_H

#include "simulationpixmapitem.h"
#include "anthill.h"

class Pheromone: public SimulationPixmapItem
{
public:
    Pheromone(AntHill * antHill);
    static bool isPheromone(QGraphicsItem * e);

    AntHill * antHill() const;

private:
    qreal m_value;
    qreal m_cycle;
    AntHill * m_antHill;


public slots:
    void onAntstepped();

    void advance(int phase);

};

#endif // PHEROMONE_H
