#include "anthill.h"
#include "simulation.h"
#include <QDataStream>

AntHill::AntHill():
    SimulationPixmapItem(),
    m_food(4),
    m_size(0),
    m_color()
{

    QString s = QString("0x%1").arg((quintptr)this, QT_POINTER_SIZE * 2, 16, QChar('0'));

    s.remove(0,2);

    QString cs(s.right(6));
    cs.append('#');

    m_color.setNamedColor(cs);

    QPixmap img(":/img/resources/anthill.png");

    changeColor(img,QColor(255,255,255),m_color);
    this->setPixmap(img);
    qDebug() << "AntHill:color:" << s;
    qDebug() << "AntHill:color:" << cs;
    qDebug() << "AntHill:color:" << m_color;
}

void AntHill::advance(int phase)
{
    Simulation::getInstance()->createAnt(this);
}

qint64 AntHill::food() const
{
    return m_food;
}

void AntHill::addFood()
{
    m_food++;
}

void AntHill::consume(qint64 amount)
{
    m_food -= amount;
}

qint64 AntHill::size() const
{
    return m_size;
}

void AntHill::growUp()
{
    m_size++;
}

bool AntHill::isAntHill(QGraphicsItem *e)
{
    AntHill* t = dynamic_cast<AntHill*> (e);
    return (t != nullptr);
}

QColor AntHill::color() const
{
    return m_color;
}
