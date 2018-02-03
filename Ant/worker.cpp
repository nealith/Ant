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
    qint64 oldStatus = m_status;
    if(m_status == FollowPheromone || m_status == CarryFood){
        m_status = Ant::MoveToAPoint;
    }
    Ant::advance(phase);

    if(oldStatus == FollowPheromone || oldStatus == CarryFood){
        m_status = oldStatus;
    }


    if(m_status == Worker::CarryFood){
        if(m_antenna->isAtAntHill()){
            antHill()->addFood();
            m_status = Ant::Waiting;
            qDebug() << "AppendFood:" << this;
            qreal r = m_orientation+180.0;
            qreal x = this->pos().x() + qCos(r*(M_PI/180.0))*0.1;
            qreal y = this->pos().y() + qSin(r*(M_PI/180.0))*0.1;
            QPointF p(x,y);
            moveToAPoint(p);
            m_status = MoveToAPoint;

        } else {
            if(m_turn_rotation == 0.0){
                Simulation::getInstance()->createPheromon(this);
            }
        }
    } else {
        if(m_antenna->contactWithPheromone() && m_status != FollowPheromone && m_status != MoveToAPoint){
            QList<Pheromone*> l(m_antenna->pheromoneList());
            Pheromone * faraway = nullptr;
            bool newCandidate = false;
            foreach (Pheromone * p, l) {
                if(faraway == nullptr){
                    faraway = p;
                } else {
                    if(QLineF(this->pos(),faraway->pos()).length() < QLineF(this->pos(),p->pos()).length() && isInFront(p,30.0)){
                        faraway = p;
                        newCandidate = true;
                    }
                }
                p->stepOn(this);
            }
            if(faraway != nullptr && (newCandidate || isInFront(faraway,90.0))){
                this->moveToAPoint(faraway->pos());
                m_status = FollowPheromone;
            } else {
                m_status = MoveRandomly;
            }

        } else if(m_antenna->contactWithFood() ){
            Food * f = m_antenna->foodList().first();
            if(f->chocFood()){
                this->moveToAPoint(this->antHill()->pos());
                m_status = Worker::CarryFood;
            }

        }
    }

    if(!m_antenna->contactWithPheromone() && m_status == FollowPheromone){
       m_status == Ant::MoveRandomly;
    }

    if((m_status != Ant::MoveToAPoint && m_status != Worker::CarryFood && m_status != FollowPheromone) || m_status == Ant::Waiting ){
        m_status = Ant::MoveRandomly;
    }

}
