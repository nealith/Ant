#include "simulation.h"
#include <QDebug>

Simulation * Simulation::instance;

Simulation::Simulation(qint64 foodQueen, qint64 foodAnt, qreal ratioWorkerSoldier, qint64 antLifeTime, qint64 antLimit):
    m_foodQueen(foodQueen),
    m_foodAnt(foodAnt),
    m_ratioWorkerSoldier(ratioWorkerSoldier),
    m_antLifeTime(antLifeTime),
    m_antLimit(antLimit),
    m_food()
{
    QGraphicsScene::setBackgroundBrush(Qt::red);
}

Simulation * Simulation::getInstance()
{
    if(nullptr == Simulation::instance){
        Simulation::instance = new Simulation();
    }
    return Simulation::instance;
}

void Simulation::init()
{
    QGraphicsScene::setSceneRect(0,0,this->width(),this->height());
    AntHill * at = new AntHill();
    at->setPos(this->width()/2.0,this->height()/2.0);
    this->addItem(at);
    for(qint64 i(0); i<15;i++ ){
        Food * fd = new Food();
        fd->setFood(qrand()%15);
        m_food.append(fd);
        this->addItem(fd);

    }
}

void Simulation::advance(int phase)
{
    QGraphicsScene::advance();
}

void Simulation::createAnt(AntHill *antHill)
{

    qint64 food = antHill->food();
    Ant * ant = nullptr;
    if (food >= m_foodQueen){
        ant = new Queen(antHill);
        antHill->setFood(food-m_foodQueen);
    } else if(antHill->size() < m_antLimit && food >= m_foodAnt) {
        //qreal r = rand();
        /*if (r < m_ratioWorkerSoldier){
            ant = new Worker(antHill);
        } else {
            ant = new Soldier(antHill);
        }*/
        ant = new Worker(antHill);
        antHill->setFood(food-m_foodAnt);
    }

    if (nullptr != ant){
        QGraphicsScene::addItem(ant);
        antHill->setSize(antHill->size()+1);
    }

}

void Simulation::createAntHill(Queen *queen)
{
    QPointF pos = queen->pos();
    QGraphicsScene::removeItem(queen);
    AntHill * antHill = new AntHill();
    antHill->setPos(pos);

}

void Simulation::createPheromon(Worker *worker)
{

}


void Simulation::deleteAnt(Ant *ant)
{
    if(ant->lifeCycles() >= m_antLifeTime){
        QGraphicsScene::removeItem(ant);
    }
}

void Simulation::addFood()
{
    Food * fd = new Food();
    fd->setFood(qrand()%15);
    m_food.append(fd);
    this->addItem(fd);
}

Food * Simulation::chocFood(Ant * ant){
    //Parcours food
    foreach(Food * fd , m_food){
        if(ant->collidesWithItem(fd)){
            fd->setFood(fd->getFood()-1);
            return fd;
        }

    }
    return NULL;
}
