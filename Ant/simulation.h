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
    Q_OBJECT
private:

    static Simulation * instance;

    qint64 m_foodQueen;
    qint64 m_foodAnt;
    qreal m_ratioWorkerSoldier;
    qint64 m_antLifeTime;
    qint64 m_antLimit;
    qint64 m_ee;
    QList<AntHill*> m_antHillList;

    Simulation(
            qint64 foodQueen = 1000,
            qint64 foodAnt = 4,
            qreal ratioWorkerSoldier = 0.5,
            qint64 antLifeTime = 5000,
            qint64 antLimit = 1000
            );
signals:
    void updateStats(QList<AntHill*> AntHills);

public:

    static const qint64 NORMAL = 0;
    static const qint64 BIGOUDENE = 1;
    static const qint64 BRITISH = 2;

    static Simulation * getInstance();
    ~Simulation();
    void init();
    void advance(int phase);
    void createAnt(AntHill *antHill);
    void createAntHill(Queen * queen);
    void createPheromon(Worker * worker);
    void pheromoneOutOfDate(Pheromone * pheromone);
    void deleteAnt(Ant * ant);
    void addFood();
    void noMoreFood(Food * food);
    static qreal rand(qint64 min = 0, qint64 max = 0);
    qreal w();
    qreal h();

    qint64 getFoodQueen() const;
    void setFoodQueen(const qint64 &foodQueen);
    qint64 getFoodAnt() const;
    void setFoodAnt(const qint64 &foodAnt);
    qreal getRatioWorkerSoldier() const;
    void setRatioWorkerSoldier(const qreal &ratioWorkerSoldier);
    qint64 getAntLifeTime() const;
    void setAntLifeTime(const qint64 &antLifeTime);
    qint64 getAntLimit() const;
    void setAntLimit(const qint64 &antLimit);
    qint64 getEe() const;
    void setEe(const qint64 &ee);
};

#endif // SIMULATION_H
