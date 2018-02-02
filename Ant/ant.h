#ifndef ANT_H
#define ANT_H

#include <QObject>
#include "anthill.h"
#include <QPointF>
#include "simulationpixmapitem.h"


class Ant : public SimulationPixmapItem
{
public:
    explicit Ant(AntHill * antHill);

    static const qint64 Waiting = 0;
    static const qint64 MoveRandomly = 1;
    static const qint64 MoveToAPoint = 2;

    void basicMove();
    void basicRotation();
    void moveRandomly();
    void moveToAPoint(qreal x, qreal y);
    void moveToAPoint(QPointF p);

    AntHill *antHill();
    //void setAntHill(AntHill *antHill);


    void advance(int phase);

    qint64 lifeCycles() const;
    void setLifeCycles(const qint64 &lifeCycles);

    bool isInFront(Ant * a);

    static bool isAnt(QGraphicsItem * e);



signals:

public slots:

private:
    AntHill *m_antHill;
    qint64 m_lifeCycles;

    void moveToAPoint2();
protected:
    class AntAntenna;


    qreal m_orientation;
    bool m_turn;
    qreal m_turn_rotation;
    bool m_beeline;
    qreal m_beeline_distance;

    AntAntenna * m_antenna;

    qint64 m_status;

};

#endif // ANT_H
