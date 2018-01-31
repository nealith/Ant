#ifndef SIMULATIONPIXMAPITEM_H
#define SIMULATIONPIXMAPITEM_H

#include <QGraphicsPixmapItem>

class SimulationPixmapItem : public QGraphicsPixmapItem
{
public:
    SimulationPixmapItem();
    void rotate(qreal rotation);
    void setPos(qreal x, qreal y);
    void setPos(QPointF p);
    QPointF pos() const;
};

#endif // SIMULATIONPIXMAPITEM_H
