#ifndef SIMULATIONPIXMAPITEM_H
#define SIMULATIONPIXMAPITEM_H

#include <QGraphicsPixmapItem>
#include <QDebug>
#if QT_VERSION >= 0x50000
    #include <qmath.h>
#else
    #include <QtCore/qmath.h>
#endif

class SimulationPixmapItem : public QGraphicsPixmapItem
{
public:
    SimulationPixmapItem();
    void rotate(qreal rotation);
    void setPos(qreal x, qreal y);
    void setPos(QPointF p);
    virtual void updateEE();
    static bool isSimulationPixmapItem(QGraphicsItem * e);
    QPointF pos() const;
};

#endif // SIMULATIONPIXMAPITEM_H
