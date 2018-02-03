#include "soldier.h"
#include "antantenna.h"
#include "simulation.h"

Soldier::Soldier(AntHill * antHill):Ant(antHill)
{

}

bool Soldier::isSoldier(QGraphicsItem * e)
{
    Soldier* t = dynamic_cast<Soldier*> (e);
    return (t != nullptr);
}

void Soldier::advance(int phase){
    qint64 oldStatus = m_status;
    if(m_status == FollowPheromone){
        m_status = Ant::MoveToAPoint;
    }
    Ant::advance(phase);

    if(oldStatus == FollowPheromone){
        m_status = oldStatus;
    }

    bool fail = false;
    if(m_antenna->contactWithForeignSoldier()){
        QList<Soldier*> l(m_antenna->foreignSoldierList());
        foreach (Soldier* s, l) {
            if(s != nullptr){
                qreal t1 = Simulation::rand(100);
                qreal t2 = Simulation::rand(100);

                if(!s->isInFront(this)){
                    t1+=20;
                }

                if(t1>=t2){
                    Simulation::getInstance()->deadInAttack(s);

                } else {
                    fail = true;
                }
                break;
            }

        }
    } else if(m_antenna->contactWithForeignAnt()){
        QList<Ant*> l(m_antenna->foreignAntList());
        foreach (Ant* a, l) {
            if(a != nullptr){
               Simulation::getInstance()->deadInAttack(a);
               break;
            }

        }
    } else if(m_antenna->contactWithForeignPheromone() && m_status != FollowPheromone){
        QList<Pheromone*> l(m_antenna->foreignPheromoneList());
        qint64 i = (qint64) Simulation::rand(l.size());
        Pheromone * p = l.at(i);
        this->moveToAPoint(p->pos());
        m_status = FollowPheromone;
    }
    if((m_status != Ant::MoveToAPoint) || m_status == Ant::Waiting ){
        m_status = Ant::MoveRandomly;
    }

    if(fail){
        Simulation::getInstance()->deadInAttack(this);
    }
}
