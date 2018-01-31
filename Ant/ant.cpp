#include "ant.h"
#include "simulation.h"
#if QT_VERSION >= 0x50000
    #include <qmath.h>
#else
    #include <QtCore/qmath.h>
#endif
#include <QDebug>
#include <QTransform>
#include <QRectF>

Ant::Ant(AntHill * antHill) :
    QGraphicsPixmapItem(),
    m_antHill(antHill),
    m_lifeCycles(0),
    m_orientation(0.0), // -90°,
    m_turn(true),
    m_turn_rotation((((float)((int)rand() % 1000)/ (float)500) - 1) * 360.0),
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
    if(m_turn){
        qreal rotation = 0.5;
        if(m_turn_rotation < 0.0){
            rotation = -0.5;
        }
        m_turn_rotation -= rotation;
        m_orientation += rotation;

        this->rotate(rotation);

        if((rotation>0.0 && m_turn_rotation <=0.0) || (rotation <0.0 && m_turn_rotation >=0.0)){
            m_turn = false;
            m_turn_rotation = 0.0;

            m_beeline = true;
            m_beeline_distance = (((float)((int)rand() % 1000)/ (float)1000)) * 30.0 + 20.0;
        }
    } else if(m_beeline){
        QPointF pos = this->pos();
        qreal x = pos.x() + qCos(m_orientation*(M_PI/180.0))*0.5;
        qreal y = pos.y() + qSin(m_orientation*(M_PI/180.0))*0.5;
        this->setPos(x,y);
        m_beeline_distance -= 0.5;

        if(m_beeline_distance <= 0.0){
            m_beeline = false;
            m_beeline_distance = 0.0;

            m_turn = true;
            m_turn_rotation = (((float)((int)qrand() % 1000)/ (float)500) - (float)1) * 45.0;
        }
    } /*else {
        qreal choice = (((float)((int)qrand() % 1000)/ (float)500) - 1);
        if(choice >= 0.0){
            m_turn = true;
            m_turn_rotation = (((float)((int)qrand() % 1000)/ (float)500) - 1) * 45.0;
        } else {
            m_beeline = true;
            m_beeline_distance = (((float)((int)qrand() % 1000)/ (float)1000)) * 50.0;
        }
        //basicMove();
    }*/

    /* old moving system
    qreal randomAngle = (((float)((int)qrand() % 1000)/ (float)500) - 1) * 5.0;
    m_orientation += randomAngle;
    qDebug() << "random angle : " << randomAngle;
    qreal move = 1.0;//10.0*(qAbs(randomAngle) /(45.0));
    QPointF pos = this->pos();
    this->setTransformOriginPoint(pos);
    this->setRotation(m_orientation+90.0);
    qreal x = pos.rx() + qCos(qDegreesToRadians(m_orientation))*move;
    qreal y = pos.ry() - qSin(qDegreesToRadians(m_orientation))*move;
    this->setPos(x,y);*/

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

void Ant::rotate(qreal angle){
    QRectF r = this->sceneBoundingRect();
    qreal w = r.width()/2.0;
    qreal h = r.height()/2.0;


    QTransform * t = new QTransform();
    t->translate(w,h);
    t->rotate(angle);
    t->translate(-w,-h);

    this->setTransform(*t,true);

    delete t;
}
