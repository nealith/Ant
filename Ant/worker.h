#ifndef WORKER_H
#define WORKER_H

#include "ant.h"

class Worker:public Ant
{
private:

public:
    Worker(AntHill * antHill);

    static bool isWorker(QGraphicsItem * e);

    void advance(int phase);

    static const qint64 CarryFood = 3;
    static const qint64 FollowPheromone = 4;


};

#endif // WORKER_H
