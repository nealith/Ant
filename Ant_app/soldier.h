#ifndef SOLDIER_H
#define SOLDIER_H

#include "ant.h"

class Soldier:public Ant
{
public:
    Soldier(AntHill * antHill);

    void advance(int phase);
};

#endif // SOLDIER_H
