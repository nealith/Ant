#include "food.h"
#include "simulation.h"

Food::Food(qreal x,qreal y,qint64 value):
    SimulationPixmapItem(),m_food(value)
{
    this->setPos(x,y);
    this->setPixmap(QPixmap(":/img/resources/food.png"));
}

bool Food::isFood(QGraphicsItem *e)
{
    Food* t = dynamic_cast<Food*> (e);
    return (t != nullptr);
}

void Food::advance(int phase)
{
    this->setScale(m_food*0.05+0.5);
    if(m_food <= 0.0){
        Simulation::getInstance()->noMoreFood(this);
    }
}

void Food::chocFood()
{
    m_food--;
}
