#ifndef ANT_H
#define ANT_H

#include <QObject>
#include "anthill.h"
#include <QPointF>
#include "simulationpixmapitem.h"
#if QT_VERSION >= 0x50000
    #include <qmath.h>
#else
    #include <QtCore/qmath.h>
#endif


class Ant : public SimulationPixmapItem
{
public:
    explicit Ant(AntHill * antHill);

    void basicMove();
    void basicRotation();
    void moveRandomly();

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
protected:
    class AntAntenna;


    qreal m_orientation;
    bool m_turn;
    qreal m_turn_rotation;
    bool m_beeline;
    qreal m_beeline_distance;

    AntAntenna * m_antenna;

};

#endif // ANT_H
