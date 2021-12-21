#ifndef CPP02_EX00_FIXED_H_
# define CPP02_EX00_FIXED_H_

# include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_fractional = 8;

public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &original);
	~Fixed(void);

	Fixed				&operator=(Fixed const &rhs);
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	Fixed				operator+(Fixed const &rhs) const;
	Fixed				operator-(Fixed const &rhs) const;
	Fixed				operator*(Fixed const &rhs) const;
	Fixed				operator/(Fixed const &rhs) const;
	bool 				operator>(Fixed const &rhs) const;
	bool 				operator<(Fixed const &rhs) const;
	bool 				operator>=(Fixed const &rhs) const;
	bool 				operator<=(Fixed const &rhs) const;
	bool 				operator==(Fixed const &rhs) const;
	bool 				operator!=(Fixed const &rhs) const;
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	static Fixed const	&min(Fixed &lhs, Fixed &rhs);
	static Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
	static Fixed const	&max(Fixed &lhs, Fixed &rhs);
	static Fixed const	&max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream			&operator<<(std::ostream &lhs, Fixed const &rhs);

#endif
