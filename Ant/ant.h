#ifndef ANT_H
#define ANT_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include "anthill.h"
#include <QPointF>

class Ant : public QGraphicsPixmapItem
{
public:
    explicit Ant(AntHill * antHill);

    void basicMove();

    AntHill *antHill();
    void setAntHill(AntHill *antHill);


    void advance(int phase);

    qint64 lifeCycles() const;
    void setLifeCycles(const qint64 &lifeCycles);

signals:

public slots:

protected:
    void rotate(qreal angle);

private:
    AntHill *m_antHill;
    qint64 m_lifeCycles;
    qreal m_orientation;
    bool m_turn;
    qreal m_turn_rotation;
    bool m_beeline;
    qreal m_beeline_distance;
    QPointF m_pos;

};

#endif // ANT_H
