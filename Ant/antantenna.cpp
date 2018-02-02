#include "antantenna.h"

Ant::AntAntenna::AntAntenna():
    m_antFront(),
    m_foreignAnt(),
    m_otherAnt(),
    m_foreignSoldier(),
    m_food(),
    m_pheromone(),
    m_foreignPheromone(),
    m_foreignAntHill(),
    m_atAntHill(false),
    m_ref(nullptr)
{

}

void Ant::AntAntenna::update()
{

    m_antFront.clear();
    m_foreignAnt.clear();
    m_otherAnt.clear();
    m_foreignSoldier.clear();
    m_food.clear();
    m_pheromone.clear();
    m_foreignPheromone.clear();
    m_foreignAntHill.clear();

    QList<QGraphicsItem*> c(m_ref->collidingItems());

    m_atAntHill = false;
    foreach (QGraphicsItem * e, c) {
        if(Ant::isAnt(e)){
            Ant * a = (Ant*)e;
            if(m_ref->isInFront(a)){
                m_antFront.append(a);
            }
            if(a->antHill() == m_ref->antHill()){
                m_otherAnt.append(a);
            } else {
                m_foreignAnt.append(a);
            }

            if(Soldier::isSoldier(e)){
                Soldier * s = (Soldier*)e;
                if(s->antHill() != m_ref->antHill()){
                    m_foreignSoldier.append(s);
                }
            } else if(Worker::isWorker(e)){
                Worker * w = (Worker*)e;

            } else if(Queen::isQueen(e)){
                Queen * q = (Queen*)e;
            }

        } else if(Pheromone::isPheromone(e)){
            Pheromone * f = (Pheromone*)e;
            if (f->antHill() == m_ref->antHill()){
                m_pheromone.append(f);
            } else {
                m_foreignPheromone.append(f);
            }
        } else if(Food::isFood(e)){
            Food * f = (Food*)e;
            m_food.append(f);
        } else if(AntHill::isAntHill(e)){
            AntHill * a = (AntHill*)e;
            if(a == m_ref->antHill()){
                m_atAntHill = true;
            } else {
                m_foreignAntHill.append(a);
            }
        }
    }
}


bool Ant::AntAntenna::isAtAntHill(){
    return m_atAntHill;
}
bool Ant::AntAntenna::isBlocked(){
    return !m_antFront.isEmpty();
}
bool Ant::AntAntenna::contactWithForeignSoldier(){
    return !m_foreignSoldier.isEmpty();
}
bool Ant::AntAntenna::contactWithPheromone(){
    return !m_pheromone.isEmpty();
}
bool Ant::AntAntenna::contactWithForeignPheromone(){
    return !m_foreignPheromone.isEmpty();
}
bool Ant::AntAntenna::contactWithForeignAntHill(){
    return !m_foreignAntHill.isEmpty();
}
bool Ant::AntAntenna::contactWithForeignAnt(){
    return !m_foreignAnt.isEmpty();
}
bool Ant::AntAntenna::contactWithFood(){
    return !m_food.isEmpty();
}

void Ant::AntAntenna::setAnt(Ant *a)
{
    m_ref = a;
}

QList<Soldier *> Ant::AntAntenna::foreignSoldierList(){
    return m_foreignSoldier;
}
QList<Ant *> Ant::AntAntenna::foreignAntList(){
    return m_foreignAnt;
}
QList<Pheromone *> Ant::AntAntenna::pheromoneList(){
    return m_pheromone;
}
QList<Pheromone *> Ant::AntAntenna::foreignPheromoneList(){
    return m_foreignPheromone;
}
QList<Food *> Ant::AntAntenna::foodList(){
    return m_food;
}
