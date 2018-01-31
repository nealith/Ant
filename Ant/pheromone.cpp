#include "pheromone.h"

Pheromone::Pheromone():
    SimulationPixmapItem(),
    m_value(10)
{

}

void Pheromone::onAntstepped(){
    if(m_value<255){
        m_value = m_value+10<=255 ? m_value+10 : 255;
        this->setOpacity(m_value/255);
    }
}

void Pheromone::advance(int phase){
    if(m_cycle==100){
        m_value--;
        m_cycle=0;
        if(m_value==0){
            // Fonction destroy
        }
        this->setOpacity(m_value/255);
    }
}
