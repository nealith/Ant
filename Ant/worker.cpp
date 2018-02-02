#include "worker.h"
#include "simulation.h"
#include <QDebug>
#include "antantenna.h"

Worker::Worker(AntHill * antHill):Ant(antHill)
{

}

bool Worker::isWorker(QGraphicsItem *e)
{
    Worker* t = dynamic_cast<Worker*> (e);
    return (t != nullptr);
}

void Worker::advance(int phase){
    bool carryFood = (m_status == CarryFood);

    if(carryFood){
        m_status = MoveToAPoint;
    }
    Ant::advance(phase);

    if(carryFood){
        m_status = CarryFood;
    }


    if(m_status == CarryFood){
        if(m_antenna->isAtAntHill()){
            antHill()->addFood();
            m_status == Waiting;
            qDebug() << "AppendFood:" << this;
        } else {
            if(m_turn_rotation == 0.0){
                Simulation::getInstance()->createPheromon(this);
            }
        }
    } else {
        if(m_antenna->contactWithPheromone()){
            QList<Pheromone*> l(m_antenna->pheromoneList());
            qint64 i = (qint64) Simulation::rand(l.size());
            Pheromone * p = l.at(i);
            moveToAPoint(p->pos());
            m_status = MoveToAPoint;
        } else if(m_antenna->contactWithFood() ){
            Food * f = m_antenna->foodList().first();
            if(f->chocFood()){
                moveToAPoint(this->antHill()->pos());
                m_status = CarryFood;
            }
        }
    }

    if(m_status != MoveToAPoint && m_status != CarryFood){
        m_status = MoveRandomly;
    }

}
