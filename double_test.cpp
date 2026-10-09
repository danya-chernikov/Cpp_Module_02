#include <iostream>
#include <limits>

int main()
{
	/*int			ival	= 1000;
	unsigned	uival	= 1000;
	double		dval	= 1.5;
	double		negdval = -11.75;*/

	std::cout << "float bits: " << sizeof(float) * 8 << '\n';
	std::cout << "digits: " << std::numeric_limits<float>::digits << '\n';
	std::cout << "min exponent: " << std::numeric_limits<float>::min_exponent << '\n';
	std::cout << "max exponent: " << std::numeric_limits<float>::max_exponent << '\n';

	float f1 = 0.0f;
	float f2 = 1.0f;
	float f3 = 0.5f;
	float f4 = 3;
	float posinf = 0x7f800000;
	float neginf = 0xff800000;
	float nan = 0x7fc00000;

	return 0;
}
