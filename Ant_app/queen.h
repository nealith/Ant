#ifndef QUEEN_H
#define QUEEN_H

#include "ant.h"

class Queen:Ant
{
private:
    QPointF m_spawn;
public:
    Queen(QPointF &pos);

    void advance(int phase);
};

#endif // QUEEN_H
