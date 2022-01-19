#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a(18);
	Fixed const b(5.5f);
	std::cout << "  a  " << a << std::endl;
	std::cout << "  b  " << b << std::endl;
	std::cout << "  >  " << (a > b) << std::endl;
	std::cout << "  <  " << (a < b) << std::endl;
	std::cout << "  >= " << (a >= b) << std::endl;
	std::cout << "  <= " << (a <= b) << std::endl;
	std::cout << "  == " << (a == b) << std::endl;
	std::cout << "  != " << (a != b) << std::endl;
	std::cout << "  +  " << (a + b) << std::endl;
	std::cout << "  -  " << (a - b) << std::endl;
	std::cout << "  *  " << (a * b) << std::endl;
	std::cout << "  /  " << (a / b) << std::endl;
	std::cout << " ++a " << ++a << std::endl;
	std::cout << "  a  " << a << std::endl;
	std::cout << " a++ " << a++ << std::endl;
	std::cout << "  a  " << a << std::endl;
	std::cout << " --a " << --a << std::endl;
	std::cout << "  a  " << a << std::endl;
	std::cout << " a-- " << a-- << std::endl;
	std::cout << "  a  " << a << std::endl;
	std::cout << " max " << Fixed::max( a, b ) << std::endl;
	std::cout << " min " << Fixed::min( a, b ) << std::endl;
	return 0;
}
