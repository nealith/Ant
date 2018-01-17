#include "worker.h"

bool Worker::hasFood() const
{
    return m_hasFood;
}

void Worker::setHasFood(bool hasFood)
{
    m_hasFood = hasFood;
}

Worker::Worker(AntHill * antHill):Ant(antHill),m_hasFood(false)
{

}
void Worker::advance(int phase){
    Ant::advance(phase);
    //3 cas
    if(m_hasFood){
        //Revient
        QLineF line(this->pos(),this->antHill()->pos()); // Line from Ant to AntHill
        if(line.length()<3){
            this->setPos(this->antHill()->pos());
        }else{
            this->setPos(line.pointAt(3));
        }
    }else{
        this->basicMove();
    }

}
