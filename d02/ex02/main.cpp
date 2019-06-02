#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed(5.05f) * Fixed(2));
	Fixed c(5.05f);
	Fixed d(5.05f);
	Fixed const f(255);
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl << std::endl;
	
	std::cout << "-----------------" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "-----------------" << std::endl;

	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl << std::endl;
	
	std::cout << "c = " << c << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c = " << c << std::endl << std::endl;
	
	std::cout << "d = " << d << std::endl;
	std::cout << "--d = " << --d << std::endl;
	std::cout << "d-- = " << d-- << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "max (" << a << "," << b << ")" <<Fixed::max(a, b) << std::endl << std::endl;
	std::cout << "min (" << a << "," << b << ")" <<Fixed::min(a, b) << std::endl << std::endl;
	std::cout << "max (" << c << "," << d << ")" <<Fixed::max(c, d) << std::endl << std::endl;
	std::cout << "min (" << c << "," << d << ")" <<Fixed::min(c, d) << std::endl << std::endl;
	std::cout << "max (" << c << "," << f << ")" <<Fixed::max(c, f) << std::endl << std::endl;
	std::cout << "min (" << c << "," << f << ")" <<Fixed::min(c, f) << std::endl << std::endl;
	std::cout << "-----------------" << std::endl;

	if (c > d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	if (c < d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	
	std::cout << "-----------------" << std::endl;
	
	if (c >= d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	if (c <= d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;

	std::cout << "-----------------" << std::endl;
	
	c = d;

	if (c >= d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	if (c <= d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;

	std::cout << "-----------------" << std::endl;
	
	if (c == d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	if (c != d)
		std::cout << "GOOD" << std::endl;
	else
		std::cout << "BAD" << std::endl;
	return 0;
}