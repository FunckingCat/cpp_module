#include "Fixed.hpp"

const int Fixed::raw = 8;

Fixed::Fixed(): fixed_val(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called\n";
	this->fixed_val = old.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator= (const Fixed &old)
{
	std::cout << "Assignation operator called\n";
	this->fixed_val = old.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_val);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->fixed_val = raw;
}