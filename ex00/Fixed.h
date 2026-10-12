#ifndef FIXED_H
#define FIXED_H

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed &operator = (const Fixed &);

private:
	int value;	
	static const int shift = 8;
};

#endif
