#ifndef WORKER_H
#define WORKER_H

#include "ant.h"

class Worker:Ant
{
private:
    bool m_hasFood;

public:
    Worker();

    void advance(int phase);
    bool hasFood() const;
    void setHasFood(bool hasFood);
};

#endif // WORKER_H
