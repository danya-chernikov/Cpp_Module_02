#include <iostream>
#include "Fixed.h"

int main()
{
	Fixed a;	
	a.setRawBits(257);
	Fixed b(a);
	Fixed c;
	c.operator=(b);
	a.setRawBits(512);
	std::cout << a.getRawBits() << '\n';
	std::cout << b.getRawBits() << '\n';
	std::cout << c.getRawBits() << '\n';
	b = b;
	return 0;
}
