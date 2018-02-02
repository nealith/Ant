#include "queen.h"
#include "simulation.h"

Queen::Queen(AntHill * antHill):Ant(antHill)
{

}

bool Queen::isQueen(QGraphicsItem * e)
{
    Queen* t = dynamic_cast<Queen*> (e);
    return (t != nullptr);
}


void Queen::advance(int phase){
    Ant::advance(phase);
    Ant::moveRandomly();
    Simulation::getInstance()->createAntHill(this);
}
