#ifndef ANTHILL_H
#define ANTHILL_H

#include <QGraphicsPixmapItem>
#include <QHash>

class AntHill : public QGraphicsPixmapItem
{
public:

    AntHill();


    void advance(int phase);



    void setSize(const qint64 &size);

    qint64 food() const;
    void setFood(const qint64 &food);

    qint64 size() const;

private:
    qint64 m_food;
    qint64 m_size;
};

#endif // ANTHILL_H
