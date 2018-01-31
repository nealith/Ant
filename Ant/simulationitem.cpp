#include "simulationitem.h"

SimulationItem::SimulationItem():QGraphicsItem()
{

}

void SimulationItem::rotate(qreal angle){
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

void SimulationItem::setPos(qreal x, qreal y){
    QRectF r = this->sceneBoundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QGraphicsItem::setPos(x-dw,y-dh);
}

void SimulationItem::setPos(QPointF p){
    this->setPos(p.x(),p.y());
}

QPointF SimulationItem::pos() const
{
    QRectF r = this->sceneBoundingRect();
    qreal dw = r.width()/2.0;
    qreal dh = r.height()/2.0;
    QPointF p = QGraphicsItem::pos();
    p.setX(p.x()+dw);
    p.setY(p.y()+dh);
    return p;
}

