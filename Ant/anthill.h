#ifndef ANTHILL_H
#define ANTHILL_H

#include "simulationpixmapitem.h"
#include <QHash>

class AntHill : public SimulationPixmapItem
{
public:

    AntHill();


    void advance(int phase);

    qint64 food() const;
    void addFood();
    void consume(qint64 amount);

    qint64 size() const;
    void growUp();

    static bool isAntHill(QGraphicsItem * e);

private:
    qint64 m_food;
    qint64 m_size;
};

#endif // ANTHILL_H
