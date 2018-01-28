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
    qreal move = randomAngle/M_PI;

    QTransform t = this->transform();

    t.translate(this->pixmap().width()/2, this->pixmap().height()/2);
    t.rotate(45, Qt::XAxis);
    t.translate(-this->pixmap().width()/2, -this->pixmap().height()/2);

    this->setTransform(t);



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


