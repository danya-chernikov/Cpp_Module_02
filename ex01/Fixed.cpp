#include <iostream>
#include <limits>
#include <cmath>
#include <stdexcept>

#include "Fixed.h"

/* ############################################################
 * #				CONSTRUCTORS & DESTRUCTORS				  #
 * ############################################################ */

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int num) : value(0)
{
	const int scale = 1 << shift;
	if (num > std::numeric_limits<int>::max() / scale ||
		num < std::numeric_limits<int>::min() / scale)
	{
		throw std::overflow_error("Fixed: integer overflow");
	}
	value = num * scale;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) : value(0)
{
	const int scale = 1 << shift;
	const float rounded = roundf(num * scale);
	if (rounded != rounded ||
		static_cast<double>(rounded) < static_cast<double>(std::numeric_limits<int>::min()) ||
		static_cast<double>(rounded) >= static_cast<double>(std::numeric_limits<int>::max()) + 1.0)
	{
		throw std::overflow_error("Fixed: float overflow");
	}
	value = static_cast<int>(rounded);
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

/* ############################################################
 * #					GETTERS & SETTERS					  #
 * ############################################################ */

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	value = raw;
}

/* ############################################################
 * #						FUNCTIONALITY					  #
 * ############################################################ */

float Fixed::toFloat() const
{
	return (static_cast<float>(value) / static_cast<float>(1 << shift));
}

int Fixed::toInt() const
{
	return (value / (1 << shift));
}

/* ############################################################
 * #					OVERLOADED OPERATORS				  #
 * ############################################################ */

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &other) // may be helpful in the future
		return *this;
	value = other.value;
	return *this;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
