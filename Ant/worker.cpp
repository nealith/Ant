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
    bool carryFood = (m_status == Worker::CarryFood);

    if(carryFood){
        m_status = Ant::MoveToAPoint;
    }
    Ant::advance(phase);

    if(carryFood){
        m_status = Worker::CarryFood;
    }


    if(m_status == Worker::CarryFood){
        if(m_antenna->isAtAntHill()){
            antHill()->addFood();
            m_status = Ant::Waiting;
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
            this->moveToAPoint(p->pos());
            m_status = Ant::MoveToAPoint;
        } else if(m_antenna->contactWithFood() ){
            Food * f = m_antenna->foodList().first();
            if(f->chocFood()){
                this->moveToAPoint(this->antHill()->pos());
                m_status = Worker::CarryFood;
            }

        }
    }

    if((m_status != Ant::MoveToAPoint && m_status != Worker::CarryFood) || m_status == Ant::Waiting ){
        m_status = Ant::MoveRandomly;
    }

}
