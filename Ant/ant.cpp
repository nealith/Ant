#include "ant.h"
#include "simulation.h"
#include <QDebug>
#include <QTransform>
#include <QRectF>

Ant::Ant(AntHill * antHill) :
    SimulationPixmapItem(),
    m_antHill(antHill),
    m_lifeCycles(0),
    m_orientation(0.0), // -90°,
    m_turn(true),
    m_turn_rotation(Simulation::rand(-1,1) * 360.0),
    m_beeline(false),
    m_beeline_distance(0)
{
    this->setPos(antHill->pos());
    QPixmap p(":/img/resources/ant.png");
    this->setPixmap(p);
    this->rotate(90);
}



void Ant::basicMove()
{
    QPointF pos = this->pos();
    qreal x = pos.x() + qCos(m_orientation*(M_PI/180.0))*0.5;
    qreal y = pos.y() + qSin(m_orientation*(M_PI/180.0))*0.5;
    this->setPos(x,y);
    m_beeline_distance -= 0.5;
}

void Ant::basicRotation()
{
    qreal rotation = 0.5;
    if(m_turn_rotation < 0.0){
        rotation = -0.5;
    }
    m_turn_rotation -= rotation;
    if(rotation <0.0 && m_turn_rotation >=0.0 || rotation>0.0 && m_turn_rotation <=0.0){
        rotation += m_turn_rotation;
        m_turn_rotation = 0.0;
    }


    m_orientation += rotation;

    this->rotate(rotation);
}

void Ant::moveRandomly()
{
    if(m_turn){
        this->basicRotation();

        if(m_turn_rotation == 0.0){
            m_turn = false;
            m_turn_rotation = 0.0;

            m_beeline = true;
            m_beeline_distance = Simulation::rand() * 30.0 + 20.0;
        }
    } else if(m_beeline){
        this->basicMove();

        if(m_beeline_distance <= 0.0){
            m_beeline = false;
            m_beeline_distance = 0.0;

            m_turn = true;
            m_turn_rotation = Simulation::rand(-1,1) * 45.0;
        }
    }
}

void Ant::advance(int phase)
{
    m_lifeCycles++;
    Simulation::getInstance()->deleteAnt(this);
}

qint64 Ant::lifeCycles() const
{
    return m_lifeCycles;
}

void Ant::setLifeCycles(const qint64 &lifeCycles)
{
    m_lifeCycles = lifeCycles;
}

AntHill *Ant::antHill()
{
    return m_antHill;
}

void Ant::setAntHill(AntHill *anthill)
{
    m_antHill = anthill;
}
