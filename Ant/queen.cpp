#include "queen.h"
#include "simulation.h"

Queen::Queen(AntHill * antHill):Ant(antHill)
{

}


void Queen::advance(int phase){
    Ant::advance(phase);
    Ant::basicMove();
    Simulation::getInstance()->createAntHill(this);
}
