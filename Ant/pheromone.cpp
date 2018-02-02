#include "pheromone.h"
#include "simulation.h"

Pheromone::Pheromone(AntHill *antHill):
    SimulationPixmapItem(),
    m_value(10),
    m_cycle(0),
    m_antHill(antHill)
{
    QPixmap p(3.0,3.0);
    p.fill(antHill->color());

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

void Pheromone::advance(int phase){
    m_cycle++;
    if(m_cycle==100*25){
        m_value--;
        m_cycle=0;
        this->setOpacity(m_value);
        if(m_value==0){
            Simulation::getInstance()->pheromoneOutOfDate(this);
        }

    }
}

void Pheromone::stepOn(Ant *ant)
{
    if(ant->antHill() == m_antHill){
        m_value += 10;
        if (m_value > 255){
            m_value = 255;
        }
    }
}
