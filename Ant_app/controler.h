#ifndef CONTROLER_H
#define CONTROLER_H

#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <Simulation.h>

class Controler : public QObject
{


    Q_OBJECT

private:
    QTimer m_timer;
    Simulation m_simulation;
    qint64 m_cycles;
    qreal m_speed_factor;
    const qint32 m_speed_one =1000 ;


public:
    explicit Controler(QObject *parent = nullptr);
    void init();

signals:

public slots:
    void onTimeout();
};

#endif // CONTROLER_H
