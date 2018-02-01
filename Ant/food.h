#ifndef FOOD_H
#define FOOD_H

#include "simulationpixmapitem.h"

class Food : public SimulationPixmapItem
{
public:
    Food(qreal x, qreal y);
    qint64 getFood() const;
    void setFood(const qint64 &value);
    static bool isFood(QGraphicsItem *e);

private:
    qint64 m_food;
};

#endif // FOOD_H
