#include <iostream>
#include <limits>
#include <exception>
#include "Fixed.h"

int main()
{
	try
	{	
		Fixed a(20);
		Fixed b(-20);
		Fixed c;
		Fixed d;

		const Fixed ca(40);
		const Fixed cb(-40);

		/* Arithmetic */
		std::cout << a + b << std::endl;
		std::cout << a - b << std::endl;
		std::cout << a * b << std::endl;
		std::cout << a / b << std::endl;

		std::cout << std::endl;

		/* Increments & Decrements */
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;

		std::cout << std::endl;

		std::cout << "--b = " << --b << std::endl;
		std::cout << "b-- = " << b-- << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << std::endl;

		/* min & max */
		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << Fixed::min(ca, cb) << std::endl;
		std::cout << Fixed::max(ca, cb) << std::endl;

		/* Some overflows */
		c.setRawBits(std::numeric_limits<int>::max());
		++c;

		d.setRawBits(std::numeric_limits<int>::min());

		--b;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
