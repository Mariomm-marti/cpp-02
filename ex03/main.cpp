#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	test;

	test = Point(19.4, 14.14);
	std::cout << test.getX() << std::endl;
	std::cout << test.getY() << std::endl;
	return 0;
}
