#ifndef CPP02_EX03_POINT_H_
# define CPP02_EX03_POINT_H_

# include "Fixed.hpp"

class Point
{
private:
	Fixed		_x;
	Fixed		_y;

public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &point);
	~Point(void);

	Point		&operator=(Point const &rhs);
	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
};

bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif
