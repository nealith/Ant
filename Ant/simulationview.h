#ifndef SIMULATIONVIEW_H
#define SIMULATIONVIEW_H

#include <QGraphicsView>
#include <QWheelEvent>

class SimulationView : public QGraphicsView
{
public:
    SimulationView(QWidget * parent = nullptr);

protected:
    void wheelEvent(QWheelEvent * event);

};

#endif // SIMULATIONVIEW_H
