#include "worker.h"

Worker::Worker():m_hasFood(false)
{

}

void Worker::advance(){
    //3 cas
    if(m_hasFood){
        //Revient
        QPointF anthill = this->anthill()->pos();
        this->setPos(this->pos()+(this->pos()+anthill)/4);
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
