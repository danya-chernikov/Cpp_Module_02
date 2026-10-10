#ifndef FIXED_H
#define FIXED_H

#include <iosfwd>

class Fixed
{
public:
	/* Constructors & Destructors */
	Fixed();
	Fixed(const Fixed &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();

	/* Getters & Setters */
	int getRawBits(void) const;
	void setRawBits(int const raw);

	/* Functionality */
	float toFloat() const;
	int toInt() const;

	/* Overloaded operators */
	Fixed &operator = (const Fixed &);

private:
	int value;	
	static int const shift = 8;

};

std::ostream &operator << (std::ostream &, const Fixed &);

#endif
