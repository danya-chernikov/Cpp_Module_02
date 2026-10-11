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

	/* Comparisons */
	bool operator > (const Fixed &) const;
	bool operator < (const Fixed &) const;
	bool operator >= (const Fixed &) const;
	bool operator <= (const Fixed &) const;
	bool operator == (const Fixed &) const;
	bool operator != (const Fixed &) const;

	/* Arithmetic */
	Fixed operator + (const Fixed &) const;
	Fixed operator - (const Fixed &) const;
	Fixed operator * (const Fixed &) const;
	Fixed operator / (const Fixed &) const;

	/* Increments & Decrements */
	Fixed & operator ++ ();
	Fixed	operator ++ (int);
	Fixed & operator -- ();
	Fixed	operator -- (int);

	/* min & max */
	static Fixed &min(Fixed &left, Fixed &right);
	static const Fixed &min(const Fixed &left, const Fixed &right);
	static Fixed &max(Fixed &left, Fixed &right);
	static const Fixed &max(const Fixed &left, const Fixed &right);

private:
	int value;	
	static int const shift = 8;

};

std::ostream &operator << (std::ostream &, const Fixed &);

#endif
