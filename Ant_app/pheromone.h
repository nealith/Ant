#ifndef PHEROMONE_H
#define PHEROMONE_H

#include <QGraphicsItem>


class Pheromone:QGraphicsItem
{
public:
    Pheromone();

private:
    qreal m_value;
    qreal m_cycle;


public slots:
    void onAntstepped();

    void advance();

};

#endif // PHEROMONE_H
