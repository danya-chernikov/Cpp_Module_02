#ifndef FIXED_H
#define FIXED_H

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &);
	~Fixed();

	Fixed &operator = (const Fixed &);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int value;	
	static int const shift = 8;
};

#endif
