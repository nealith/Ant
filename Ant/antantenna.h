#ifndef ANTANTENNA_H
#define ANTANTENNA_H

#include <QGraphicsItem>
#include <ant.h>
#include <anthill.h>
#include <pheromone.h>
#include <worker.h>
#include <soldier.h>
#include <queen.h>
#include <food.h>
#include <QList>

class Ant::AntAntenna
{
public:
    AntAntenna();
    void update();

    bool isAtAntHill();
    bool isBlocked();
    bool contactWithForeignSoldier();
    bool contactWithPheromone();
    bool contactWithForeignPheromone();
    bool contactWithForeignAntHill();
    bool contactWithForeignAnt();
    bool contactWithFood();

    QList<Soldier *> foreignSoldierList();
    QList<Ant *> foreignAntList();
    QList<Pheromone *> pheromoneList();
    QList<Pheromone *> foreignPheromoneList();
    QList<Food *> foodList();

    void setAnt(Ant * a);

private:
    QList<Ant *> m_antFront;
    QList<Ant *> m_foreignAnt;
    QList<Ant *> m_otherAnt;
    QList<Soldier *> m_foreignSoldier;
    QList<Food *> m_food;
    QList<Pheromone *> m_pheromone;
    QList<Pheromone *> m_foreignPheromone;
    QList<AntHill *> m_foreignAntHill;

    bool m_atAntHill;
    Ant * m_ref;

};

#endif // ANTANTENNA_H
