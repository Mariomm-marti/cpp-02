#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	Fixed		e(0.0f);

	a = Fixed(1234.4321f);
	std::cout << e << std::endl;
	std::cout << a << std::endl;
	return 0;
}
