#include "ant.h"
#include "simulation.h"
#include <QtMath>

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
    qreal randomAngle = qrand() * M_PI;
    m_orientation = qDegreesToRadians(
                (qreal)(
                     (int)qRadiansToDegrees(randomAngle + m_orientation)
                     %
                     (int)qRadiansToDegrees(2*M_PI)
                     )
                 );
    qreal move = qAbs(M_PI/2 - randomAngle) /(M_PI/2);
    QPointF pos = this->pos();
    qreal x = pos.rx() + qCos(m_orientation)*move;
    qreal y = pos.ry() + qSin(m_orientation)*move;
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


