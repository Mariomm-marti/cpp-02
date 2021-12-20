#ifndef CPP02_EX00_FIXED_H_
# define CPP02_EX00_FIXED_H_

class Fixed
{
private:
	int					_value;
	static int const	_fractional = 8;

public:
	Fixed(void);
	Fixed(Fixed const &original);
	~Fixed(void);

	Fixed				&operator=(Fixed const &rhs);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif
