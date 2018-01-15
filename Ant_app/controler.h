#ifndef CONTROLER_H
#define CONTROLER_H

#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <Simulation>

class Controler : public QObject
{


    Q_OBJECT

private:
    QGraphicsScene m_scene;
    QTimer m_timer;
    Simulation m_simulation;
    qint64 m_cycles;


public:
    explicit Controler(QObject *parent = nullptr);
    void init();

signals:

public slots:
    void onTimeout();
};

#endif // CONTROLER_H
