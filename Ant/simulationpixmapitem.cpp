#include "simulationpixmapitem.h"
#include <QDebug>

SimulationPixmapItem::SimulationPixmapItem():QGraphicsPixmapItem()
{
    this->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);
}

void SimulationPixmapItem::rotate(qreal angle){
    //this->setTransformOriginPoint(this->pos());
    QRectF r = this->boundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;


    QTransform * t = new QTransform();
    t->translate(dw,dh);
    t->rotate(angle);
    t->translate(-dw,-dh);

    this->setTransform(*t,true);

    delete t;
}

void SimulationPixmapItem::setPos(qreal x, qreal y){
    QRectF r = this->boundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QGraphicsPixmapItem::setPos((x-dw),(y-dh));

}

void SimulationPixmapItem::setPos(QPointF p){
    this->setPos(p.x(),p.y());
}

void SimulationPixmapItem::updateEE()
{

}

bool SimulationPixmapItem::isSimulationPixmapItem(QGraphicsItem *e)
{
    SimulationPixmapItem* t = dynamic_cast<SimulationPixmapItem*> (e);
    return (t != nullptr);
}

QPointF SimulationPixmapItem::pos() const
{
    QRectF r = this->boundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QPointF p = QGraphicsPixmapItem::pos();
    p.setX(p.x()+dw);
    p.setY(p.y()+dh);
    return p;
}
