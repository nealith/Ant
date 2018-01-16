#ifndef SIMULATION_H
#define SIMULATION_H


#include <QGraphicsScene>
#include <ant.h>
#include <anthill.h>
#include <pheromone.h>
#include <worker.h>
#include <soldier.h>
#include <queen.h>

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
            qint64 antLimit = -1
            );
public:
    static Simulation * getInstance();
    void init();
    void createAnt(AntHill *antHill);
    void createAntHill(Queen * queen);
    void createPheromon(Worker * worker);
    void deleteAnt(Ant * ant);
};

#endif // SIMULATION_H
