#ifndef ANT_H
#define ANT_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include "anthill.h"

class Ant : public QGraphicsPixmapItem
{
public:
    explicit Ant(QGraphicsPixmapItem *parent = nullptr);



    Anthill *anthill() const;
    void setAnthill(Anthill *anthill);

signals:

public slots:

private:
    Anthill *m_anthill;


};

#endif // ANT_H
