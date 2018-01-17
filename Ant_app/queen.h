#ifndef QUEEN_H
#define QUEEN_H

#include "ant.h"
#include "anthill.h"

class Queen:public Ant
{

public:
    Queen(AntHill * antHill);

    void advance(int phase);
};

#endif // QUEEN_H
