#ifndef QUEEN_H
#define QUEEN_H

#include "ant.h"

class Queen:public Ant
{

public:
    Queen(AntHill * antHill);
    static bool isQueen(QGraphicsItem *e);

    void advance(int phase);
};

#endif // QUEEN_H
