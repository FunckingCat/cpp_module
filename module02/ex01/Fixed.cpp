#include "Fixed.hpp"

const int Fixed::raw = 8;

Fixed::Fixed(): fixed_val(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called\n";
	this->fixed_val = val << Fixed::raw;
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called\n";
	this->fixed_val = roundf(val * (1 << Fixed::raw));
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

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_val/(float)(1 << Fixed::raw));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_val >> Fixed::raw);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}