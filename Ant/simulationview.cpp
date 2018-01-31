#include "simulationview.h"

SimulationView::SimulationView(QWidget * parent):QGraphicsView(parent)
{
    this->setDragMode(QGraphicsView::ScrollHandDrag);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
}

void SimulationView::wheelEvent(QWheelEvent *event)
{
    if(event->delta() > 0){
        this->scale(1.2,1.2);
    } else {
        this->scale(0.8,0.8);
    }
    this->centerOn(this->mapToScene(event->pos()));

}
