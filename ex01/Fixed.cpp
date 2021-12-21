#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0) { }

Fixed::Fixed(int const value)
{
	_value = value * (1 << _fractional);
}

Fixed::Fixed(float const value)
{
	_value = (int)(roundf(value * (1 << _fractional)));
}

Fixed::Fixed(Fixed const &original)
{
	*this = original;
}

Fixed::~Fixed(void) { }

Fixed			&Fixed::operator=(Fixed const &rhs)
{
	_value = rhs.getRawBits();
	return *this;
}

int				Fixed::getRawBits(void) const
{
	return _value;
}

void			Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float			Fixed::toFloat(void) const
{
	return (float)_value / (float)(1 << _fractional);
}

int				Fixed::toInt(void) const
{
	return (int)toFloat();
}

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();
	return lhs;
}
