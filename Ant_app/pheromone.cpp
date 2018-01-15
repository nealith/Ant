#include "pheromone.h"

Pheromone::Pheromone():m_value(10)
{

}

void Pheromone::onAntstepped(){
    if(m_value<255){
        m_value = m_value+10<=255 ? m_value+10 : 255;
    }
}

void Pheromone::advance(){
    if(m_cycle==100){
        m_value--;
        m_cycle=0;
        // Modifier l'intensité si motivé
    }
}
