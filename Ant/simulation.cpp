#include "simulation.h"
#include <QDebug>
#include <QRandomGenerator64>
#include <QDateTime>

Simulation * Simulation::instance;

Simulation::Simulation(qint64 foodQueen, qint64 foodAnt, qreal ratioWorkerSoldier, qint64 antLifeTime, qint64 antLimit):
    m_foodQueen(foodQueen),
    m_foodAnt(foodAnt),
    m_ratioWorkerSoldier(ratioWorkerSoldier),
    m_antLifeTime(antLifeTime),
    m_antLimit(antLimit)
{
    QGraphicsScene::setBackgroundBrush(QBrush(QPixmap(":/img/resources/background.png"))); //Qt::red
}

Simulation * Simulation::getInstance()
{
    if(nullptr == Simulation::instance){
        Simulation::instance = new Simulation();
    }
    return Simulation::instance;
}

Simulation::~Simulation()
{
    /*foreach(Food * fd , m_foodList){
        delete fd;
    }
    foreach(Ant * ant , m_antList){
        delete ant;
    }
    foreach(AntHill * antHill , m_antHillList){
        delete antHill;
    }*/

}

void Simulation::init(qreal width, qreal height)
{
    AntHill * at = new AntHill();
    at->setPos(width/2.0,height/2.0);
    this->addItem(at);
    for(qint64 i(0); i<20;i++ ){
        this->addFood();

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
    Food * f = new Food(Simulation::rand(this->w()),Simulation::rand(this->h()),Simulation::rand(15));
    bool noCollide = false;
    while(!f->collidingItems().empty()){
        f->setPos(Simulation::rand(this->w()),Simulation::rand(this->h()));
    }
    this->addItem(f);
}

void Simulation::noMoreFood(Food *f)
{
    this->removeItem(f);
}

/*Food * Simulation::chocFood(Ant * ant){
    //Parcours food
    foreach(Food * fd , m_foodList){
        if(ant->collidesWithItem(fd)){
            fd->setFood(fd->getFood()-1);
            if (fd->getFood() == 0){
                m_foodList.removeOne(fd);
                this->removeItem(fd);
            } else {
               return fd;
            }
        }

    }
    return NULL;
}*/

qreal Simulation::rand(qint64 min, qint64 max)
{
    QRandomGenerator64 rg(QDateTime::currentDateTime().toMSecsSinceEpoch());
    qreal randomReal(qreal(rg.bounded(0,10000000))/10000000.0);
    randomReal *= (qreal)(qrand()%1000000)/1000000.0;
    if(max > min){
        randomReal *= (max - min);
        randomReal += min;
    } else if(max < min){
        randomReal *= (min - max);
        randomReal += max;
    }
    return randomReal;
}

qreal Simulation::w()
{
    this->sceneRect().width();
}

qreal Simulation::h()
{
    this->sceneRect().height();
}
