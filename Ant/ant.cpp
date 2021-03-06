#include "ant.h"
#include "simulation.h"
#include <QDebug>
#include <QTransform>
#include <QRectF>
#include "antantenna.h"



Ant::Ant(AntHill * antHill) :
    SimulationPixmapItem(),
    m_antHill(antHill),
    m_lifeCycles(0),
    m_orientation(0.0), // -90°,
    m_turn(true),
    m_turn_rotation(Simulation::rand(-1,1) * 360.0),
    m_beeline(false),
    m_beeline_distance(0),
    m_antenna(new AntAntenna()),
    m_status(Ant::MoveRandomly)
{
    this->setPos(antHill->pos());
    QPixmap p(":/img/resources/ant.png");

    changeColor(p,QColor(255,255,255),m_antHill->color());

    this->setPixmap(p);
    this->rotate(90);
    m_antenna->setAnt(this);
}



void Ant::basicMove()
{
    if(!m_antenna->isBlocked()){
        QPointF pos = this->pos();
        qreal x = pos.x() + qCos(m_orientation*(M_PI/180.0))*0.5;
        qreal y = pos.y() + qSin(m_orientation*(M_PI/180.0))*0.5;
        this->setPos(x,y);
        m_beeline_distance -= 0.5;
    }
}

void Ant::basicRotation()
{
    qreal rotation = 0.5;
    if(m_turn_rotation < 0.0){
        rotation = -0.5;
    }
    m_turn_rotation -= rotation;
    if((rotation <0.0 && m_turn_rotation >=0.0) || (rotation>0.0 && m_turn_rotation <=0.0)){
        rotation += m_turn_rotation;
        m_turn_rotation = 0.0;
    }
    m_orientation += rotation;

    this->rotate(rotation);
}

void Ant::moveRandomly()
{
    if(m_status == MoveRandomly){
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

}

void Ant::moveToAPoint(qreal x, qreal y)
{
    QPointF p1(x,y);
    QLineF lineToPoint(this->pos(),p1);

    qreal x2 = this->pos().x() + qCos(m_orientation*(M_PI/180.0))*20.0;
    qreal y2 = this->pos().y() + qSin(m_orientation*(M_PI/180.0))*20.0;
    QPointF p2(x2,y2);
    QLineF lineToPointFromCurrentRotation(this->pos(),p2);
    qreal a(lineToPointFromCurrentRotation.angleTo(lineToPoint));
    m_turn = true;
    m_turn_rotation = -a;
    m_beeline = false;
    m_beeline_distance = lineToPoint.length();

}

void Ant::moveToAPoint(QPointF p)
{
    moveToAPoint(p.x(),p.y());
}

void Ant::advance(int phase)
{
    m_lifeCycles++;
    m_antenna->update();

    qDebug() << "turn:" << m_turn << ":" << m_turn_rotation << "beeline:"<< m_beeline << ":" << m_beeline_distance << ";;cycle:" << m_lifeCycles << ";status:" << this << "::" << m_status;

    if(m_status == MoveRandomly){
        moveRandomly();
    }

    if(m_status == MoveToAPoint){
        if(m_beeline_distance <= 0.0){
            m_beeline = false;
            m_beeline_distance = 0.0;

            m_turn = true;
            m_turn_rotation = Simulation::rand(-1,1) * 45.0;
            m_status = MoveRandomly;
            moveRandomly();
        } else {
           moveToAPoint2();
        }

    }

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

bool Ant::isInFront(QGraphicsItem *a, qreal angle)
{
    QLineF l1(this->pos(),a->pos());
    qreal x = this->pos().x() + qCos(m_orientation*(M_PI/180.0))*5.0;
    qreal y = this->pos().y() + qSin(m_orientation*(M_PI/180.0))*5.0;
    QPointF p(x,y);
    QLineF l2(this->pos(),p);
    return qAbs(l2.angleTo(l1))<angle;
}

bool Ant::isAnt(QGraphicsItem *e)
{
    Ant* t = dynamic_cast<Ant*> (e);
    return (t != nullptr);
}

void Ant::moveToAPoint2()
{
    if(m_status == MoveToAPoint){
        if(m_turn){
            this->basicRotation();

            if(m_turn_rotation == 0.0){
                m_turn = false;
                m_turn_rotation = 0.0;

                m_beeline = true;
            }
        } else if(m_beeline){
            this->basicMove();

        }
        if(m_beeline_distance <= 0.0){
            m_status = MoveRandomly;
            moveRandomly();
        }
    }


}

AntHill *Ant::antHill()
{
    return m_antHill;
}
