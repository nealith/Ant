#ifndef SIMULATION_H
#define SIMULATION_H


#include <QGraphicsScene>
#include <ant.h>
#include <anthill.h>
#include <pheromone.h>
#include <worker.h>
#include <soldier.h>
#include <queen.h>
#include <food.h>
#include <QList>

#if QT_VERSION >= 0x50000
    #include <qmath.h>
#else
    #include <QtCore/qmath.h>
#endif

class Simulation: public QGraphicsScene
{
private:

    static Simulation * instance;

    qint64 m_foodQueen;
    qint64 m_foodAnt;
    qreal m_ratioWorkerSoldier;
    qint64 m_antLifeTime;
    qint64 m_antLimit;

    Simulation(
            qint64 foodQueen = 1000,
            qint64 foodAnt = 4,
            qreal ratioWorkerSoldier = 0.5,
            qint64 antLifeTime = 5000,
            qint64 antLimit = 1000
            );
public:
    static Simulation * getInstance();
    ~Simulation();
    void init();
    void advance(int phase);
    void createAnt(AntHill *antHill);
    void createAntHill(Queen * queen);
    void createPheromon(Worker * worker);
    void deleteAnt(Ant * ant);
    void addFood();
    /*Food * chocFood(Ant * ant);*/
    void noMoreFood(Food * f);
    static qreal rand(qint64 min = 0, qint64 max = 0);
    qreal w();
    qreal h();

};

#endif // SIMULATION_H
