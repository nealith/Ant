#ifndef SOLDIER_H
#define SOLDIER_H

#include "ant.h"

class Soldier:Ant
{
public:
    Soldier();

    void advance(int phase);
};

#endif // SOLDIER_H
