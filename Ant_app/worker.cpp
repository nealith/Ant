#include "worker.h"

bool Worker::hasFood() const
{
    return m_hasFood;
}

void Worker::setHasFood(bool hasFood)
{
    m_hasFood = hasFood;
}

Worker::Worker():m_hasFood(false)
{

}

void Worker::advance(int phase){
    //3 cas
    if(m_hasFood){
        //Revient
        QLineF line(this->pos(),this->anthill()->pos()); // Line from Ant to AntHill
        if(line.length()<3){
            this->setPos(this->anthill()->pos());
        }else{
            this->setPos(line.pointAt(3));
        }
    }else if(false){
        //Suivre

    }else{
        // Cherche
        QPointF step(this->pos());
        step.setX(step.x()-5 + (rand() % static_cast<int>(11)));
        step.setY(step.y()-5 + (rand() % static_cast<int>(11)));
        this->setPos(step);
    }

}
