#include "simulationpixmapitem.h"
#include <QDebug>

SimulationPixmapItem::SimulationPixmapItem():QGraphicsPixmapItem()
{

}

void SimulationPixmapItem::rotate(qreal angle){
    QRectF r = this->sceneBoundingRect();
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
    QRectF r = this->sceneBoundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QGraphicsPixmapItem::setPos((x-dw),(y-dh));

}

void SimulationPixmapItem::setPos(QPointF p){
    this->setPos(p.x(),p.y());
}

QPointF SimulationPixmapItem::pos() const
{
    QRectF r = this->sceneBoundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QPointF p = QGraphicsPixmapItem::pos();
    p.setX(p.x()+dw);
    p.setY(p.y()+dh);
    return p;
}