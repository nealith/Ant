#include "worker.h"
#include "simulation.h"
#include <QDebug>

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
    //Ant::advance(phase);
    //3 cas
    if(m_hasFood){
        //Revient
        qDebug() << "J'ai a manger";
        if(this->collidesWithItem(this->antHill())){
            m_hasFood = false;
            antHill()->setFood(antHill()->food()+1);
        }else{
            QLineF line(this->pos(),this->antHill()->pos()); // Line from Ant to AntHill
            this->setPos(line.pointAt(.01));
        }
    }else{
        // Cherche
        /*QPointF step(this->pos());
        step.setX(step.x()-5 + (rand() % static_cast<int>(11)));
        step.setY(step.y()-5 + (rand() % static_cast<int>(11)));
        this->setPos(step);*/
        Ant::basicMove();

        Food * fd = Simulation::getInstance()->chocFood(this);
        if(fd!=NULL){
            m_hasFood = true;
        }
    }

}
