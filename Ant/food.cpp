#include "food.h"

Food::Food(qreal x,qreal y):
    SimulationPixmapItem()
{
    this->setPos(x,y);
    this->setPixmap(QPixmap(":/img/resources/food.png"));
}

qint64 Food::getFood() const
{
    return m_food;
}

void Food::setFood(const qint64 &value)
{
    m_food = value;
    this->setScale(m_food*0.05+0.5);
}
