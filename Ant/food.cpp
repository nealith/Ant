#include "food.h"

Food::Food()
{

}

qint64 Food::getFood() const
{
    return food;
}

void Food::setFood(const qint64 &value)
{
    food = value;
}
