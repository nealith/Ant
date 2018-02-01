#include "anthill.h"
#include "simulation.h"

AntHill::AntHill():
    SimulationPixmapItem(),
    m_food(4),
    m_size(0)
{
    this->setPixmap(QPixmap(":/img/resources/anthill.png"));
}

void AntHill::advance(int phase)
{
    Simulation::getInstance()->createAnt(this);
}

void AntHill::setSize(const qint64 &size)
{
    m_size = size;
}

qint64 AntHill::food() const
{
    return m_food;
}

void AntHill::setFood(const qint64 &food)
{
    m_food = food;
}

qint64 AntHill::size() const
{
    return m_size;
}

bool AntHill::isAntHill(QGraphicsItem *e)
{
    AntHill* t = dynamic_cast<AntHill*> (e);
    return (t != nullptr);
}
