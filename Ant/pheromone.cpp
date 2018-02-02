#include "pheromone.h"

Pheromone::Pheromone(AntHill *antHill):
    SimulationPixmapItem(),
    m_value(10),
    m_antHill(antHill)
{
    QPixmap p(1.0,1.0);
    p.fill(Qt::red);

    this->setPixmap(p);
}

bool Pheromone::isPheromone(QGraphicsItem *e)
{
    Pheromone* t = dynamic_cast<Pheromone*> (e);
    return (t != nullptr);
}

AntHill * Pheromone::antHill() const
{
    return m_antHill;
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
