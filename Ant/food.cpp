#include "food.h"
#include "simulation.h"

Food::Food(qreal x,qreal y,qint64 value):
    SimulationPixmapItem(),m_food(value),m_foodAtInit(value)
{
    this->setPos(x,y);
    this->setPixmap(QPixmap(":/img/resources/food.png"));
    qDebug() << "createFood:" << this << "value:" << m_food;
}

bool Food::isFood(QGraphicsItem *e)
{
    Food* t = dynamic_cast<Food*> (e);
    return (t != nullptr);
}

void Food::advance(int phase)
{
    this->setScale((qreal)m_food/15.0);
    if(m_food <= 0){
        Simulation::getInstance()->noMoreFood(this);
    }
}

bool Food::chocFood()
{
    if (m_food > 0){
        m_food--;
        return true;
    } else {
        return false;
    }
}
