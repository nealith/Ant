#ifndef SOLDIER_H
#define SOLDIER_H

#include "ant.h"

class Soldier:public Ant
{
public:
    Soldier(AntHill * antHill);

    static bool isSoldier(QGraphicsItem *e);

    static const qint64 FollowPheromone = 3;

    void advance(int phase);
};

#endif // SOLDIER_H
