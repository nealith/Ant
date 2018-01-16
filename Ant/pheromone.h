#ifndef PHEROMONE_H
#define PHEROMONE_H

#include <QGraphicsItem>


class Pheromone:QGraphicsPixmapItem
{
public:
    Pheromone();

private:
    qreal m_value;
    qreal m_cycle;


public slots:
    void onAntstepped();

    void advance(int phase);

};

#endif // PHEROMONE_H
