#include "soldier.h"

Soldier::Soldier()
{

}

void Soldier::advance(int phase){
    //2CAS

    if(false){
        //suivre
    }else{
        // Cherche
        QPointF step(this->pos());
        step.setX(step.x()-5 + (rand() % static_cast<int>(11)));
        step.setY(step.y()-5 + (rand() % static_cast<int>(11)));
        this->setPos(step);
    }
}
