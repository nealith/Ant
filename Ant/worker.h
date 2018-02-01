#ifndef WORKER_H
#define WORKER_H

#include "ant.h"

class Worker:public Ant
{
private:
    bool m_hasFood;

public:
    Worker(AntHill * antHill);

    static bool isWorker(QGraphicsItem * e);

    void advance(int phase);
    bool hasFood() const;
    void setHasFood(bool hasFood);
};

#endif // WORKER_H
