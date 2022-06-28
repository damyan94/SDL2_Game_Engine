// Corresponding header
#include "utils/geometry/Point.h"

// C/C++ system includes
#include <iostream>

// Third-party includes

// Own includes

const Point Point::ZERO = Point(0, 0);
const Point Point::UNDEFINED = Point(10000, 10000);

Point::Point(int32_t posX, int32_t posY) : x(posX), y(posY)
{

}

bool Point::operator==(const Point& other) const
{
	return (this->x == other.x) && (this->y == other.y);
}

bool Point::operator!=(const Point& other) const
{
	return !(*this == other);
}