#ifndef SIMULATIONITEM_H
#define SIMULATIONITEM_H

#include <QGraphicsItem>
#if QT_VERSION >= 0x50000
    #include <qmath.h>
#else
    #include <QtCore/qmath.h>
#endif

class SimulationItem : public QGraphicsItem
{
public:
    SimulationItem();
    void rotate(qreal rotation);
    void setPos(qreal x, qreal y);
    void setPos(QPointF p);
    QPointF pos() const;
};

#endif // SIMULATIONITEM_H
