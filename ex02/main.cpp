#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int	main(void)
{
	{
		Fixed		a;
		Fixed const	b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}

	{
		Fixed		a;
		Fixed const	b(10);
		Fixed const	c(42.42f);
		Fixed const	d(b);
		Fixed		e(0.0f);

		a = Fixed(1234.4321f);
		std::cout << e-- << std::endl;
		std::cout << e << std::endl;

		std::cout << ++a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << Fixed::min(a, c) << std::endl;
		std::cout << std::min(a, c) << std::endl;

		std::cout << Fixed::min(a, e) << std::endl;
		std::cout << std::min(a, e) << std::endl;
	}
	return 0;
}
