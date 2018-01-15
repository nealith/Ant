#include "anthill.h"

Anthill::AntHill():
    m_food(4),
    m_size(0)
{

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
