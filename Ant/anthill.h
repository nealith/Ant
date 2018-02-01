#ifndef ANTHILL_H
#define ANTHILL_H

#include "simulationpixmapitem.h"
#include <QHash>

class AntHill : public SimulationPixmapItem
{
public:

    AntHill();


    void advance(int phase);



    void setSize(const qint64 &size);

    qint64 food() const;
    void setFood(const qint64 &food);

    qint64 size() const;

    static bool isAntHill(QGraphicsItem * e);

private:
    qint64 m_food;
    qint64 m_size;
};

#endif // ANTHILL_H
