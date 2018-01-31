#include "food.h"

Food::Food():
    QGraphicsPixmapItem()
{
    this->setPos(qrand()%1000,qrand()%500);
    this->setPixmap(QPixmap(":/img/resources/food.png"));
}

qint64 Food::getFood() const
{
    return food;
}

void Food::setFood(const qint64 &value)
{
    food = value;
    this->setScale(food*0.1);
}
