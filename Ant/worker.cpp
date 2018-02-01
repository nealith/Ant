#include "worker.h"
#include "simulation.h"
#include <QDebug>
#include "antantenna.h"

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

bool Worker::isWorker(QGraphicsItem *e)
{
    Worker* t = dynamic_cast<Worker*> (e);
    return (t != nullptr);
}

void Worker::advance(int phase){
    Ant::advance(phase);
    //3 cas
    if(m_hasFood){
        //Revient

        if(this->collidesWithItem(this->antHill())){
            m_hasFood = false;
            antHill()->setFood(antHill()->food()+1);
        }else{
            if(m_turn){
                this->basicRotation();

                if(m_turn_rotation == 0.0){
                    m_turn = false;
                    m_turn_rotation = 0.0;

                    m_beeline = true;
                }
            } else if(m_beeline){
                this->basicMove();
            }
        }
    }else{
        // Cherche
        /*QPointF step(this->pos());
        step.setX(step.x()-5 + (rand() % static_cast<int>(11)));
        step.setY(step.y()-5 + (rand() % static_cast<int>(11)));
        this->setPos(step);*/
        Ant::moveRandomly();

        if(this->m_antenna->contactWithFood() ){
            Food * f = this->m_antenna->foodList().first();

            m_hasFood = true;
            QLineF line(this->pos(),this->antHill()->pos()); // Line from Ant to AntHill

            qreal x = this->pos().x() + qCos(m_orientation*(M_PI/180.0))*5.0;
            qreal y = this->pos().y() + qSin(m_orientation*(M_PI/180.0))*5.0;
            QPointF p(x,y);
            QLineF lineB(this->pos(),p);
            qreal a(line.angle(lineB));
            m_turn = true;
            m_turn_rotation = a-90.0;
            m_beeline = false;
            m_beeline_distance = line.length();

            f->chocFood();
        }
    }

}
