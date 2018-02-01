#include "queen.h"
#include "simulation.h"

Queen::Queen(AntHill * antHill):Ant(antHill)
{

}


void Queen::advance(int phase){
    Ant::advance(phase);
    Ant::moveRandomly();
    Simulation::getInstance()->createAntHill(this);
}
