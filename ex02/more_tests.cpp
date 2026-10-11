#include <iostream>
#include "Fixed.h"

int main()
{
	Fixed a(20);
	Fixed b(-20);
	const Fixed ca(40);
	const Fixed cb(-40);

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	std::cout << std::endl;

	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl;

	std::cout << "--b = " << --b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(ca, cb) << std::endl;
	std::cout << Fixed::max(ca, cb) << std::endl;

	return 0;
}
