#include "ant.h"
#include "simulation.h"
#include <QtMath>
#include <QDebug>

Ant::Ant(AntHill * antHill) :
    QGraphicsPixmapItem(),
    m_antHill(antHill),
    m_lifeCycles(0),
    m_orientation(M_PI/2)
{
    this->setPos(antHill->pos());
    this->setPixmap(QPixmap(":/img/resources/ant.png"));
}

void Ant::basicMove()
{
    qreal randomAngle = (((float)((int)qrand() % 1000)/ (float)500) - 1) * M_PI/2;
    m_orientation += randomAngle;
    qreal move = 1;//(qAbs(randomAngle) /(M_PI/4));
    QPointF pos = this->pos();
    qreal x = pos.rx() + qCos(m_orientation)*move;
    qreal y = pos.ry() - qSin(m_orientation)*move;
    if(m_orientation > 2*M_PI){
        m_orientation -= 2*M_PI;
    }
    this->setPos(x,y);
    this->setRotation(m_orientation);

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


