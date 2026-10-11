#include <iostream>
#include <limits>

int main()
{
	float x = std::numeric_limits<float>::quiet_NaN();
	std::cout << x << '\n';
	return 0;
}
