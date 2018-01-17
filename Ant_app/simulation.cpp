#include "simulation.h"

Simulation::Simulation(qint64 foodQueen, qint64 foodAnt, qreal ratioWorkerSoldier, qint64 antLifeTime, qint64 antLimit):
    m_foodQueen(foodQueen),
    m_foodAnt(foodAnt),
    m_ratioWorkerSoldier(ratioWorkerSoldier),
    m_antLifeTime(antLifeTime),
    m_antLimit(antLimit)
{

}

Simulation::~Simulation()
{
    delete instance;
}

Simulation *Simulation::getInstance()
{
    if(nullptr != instance){
        return instance;
    } else {
        instance = new Simulation();
    }
}

void Simulation::init()
{


}

void Simulation::createAnt(AntHill *antHill)
{
    qint64 food = antHill->food();
    Ant * ant = nullptr;
    if (food > m_foodQueen){
        ant = new Queen(antHill);
        antHill->setFood(food-m_foodQueen);
    } else if(antHill->size() < m_antLimit) {
        qreal r = rand();
        if (r < m_ratioWorkerSoldier){
            ant = new Worker(antHill);
        } else {
            ant = new Soldier(antHill);
        }
        antHill->setFood(food-m_foodAnt);
    }

    if (nullptr != ant){
        //addItem(ant);
        antHill->setSize(antHill->size()+1);
    }

}

void Simulation::createAntHill(Queen *queen)
{
    QPointF pos = queen->pos();
    //removeItem(queen);
    AntHill * antHill = new AntHill();
    antHill->setPos(pos);

}

void Simulation::createPheromon(Worker *worker)
{

}

void Simulation::deleteAnt(Ant *ant)
{
/*    if(lifeCycles >= ant->lifeCycles()){
        removeItem(ant);
    }*/
}


