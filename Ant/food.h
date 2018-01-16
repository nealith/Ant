#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>

class Food : public QGraphicsPixmapItem
{
public:
    Food();
    qint64 getFood() const;
    void setFood(const qint64 &value);

private:
    qint64 food;
};

#endif // FOOD_H
