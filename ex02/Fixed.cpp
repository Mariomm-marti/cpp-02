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

Fixed			&Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed			&Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed	temp;

	temp.setRawBits(_value++);
	return temp;
}

Fixed			Fixed::operator--(int)
{
	Fixed	temp(_value--);

	return temp;
}

Fixed			Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed			Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed			Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed			Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(toFloat() / rhs.toFloat());
}

bool 			Fixed::operator>(Fixed const &rhs) const
{
	return _value > rhs.getRawBits();
}

bool 			Fixed::operator<(Fixed const &rhs) const
{
	return _value < rhs.getRawBits();
}

bool 			Fixed::operator>=(Fixed const &rhs) const
{
	return _value >= rhs.getRawBits();
}

bool 			Fixed::operator<=(Fixed const &rhs) const
{
	return _value <= rhs.getRawBits();
}

bool 			Fixed::operator==(Fixed const &rhs) const
{
	return _value == rhs.getRawBits();
}

bool 			Fixed::operator!=(Fixed const &rhs) const
{
	return _value != rhs.getRawBits();
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

Fixed const		&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed const		&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed const		&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed const		&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}


std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();
	return lhs;
}
