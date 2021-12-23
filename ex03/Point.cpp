#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) { }

Point::Point(float const x, float const y) : _x(x), _y(y) { }

Point::Point(Point const &point)
{
	*this = point;
}

Point::~Point(void) { }

Point		&Point::operator=(Point const &rhs)
{
	_x = rhs.getX();
	_y = rhs.getY();
	return *this;
}

Fixed const	&Point::getX(void) const { return _x; }

Fixed const &Point::getY(void) const { return _y; }
