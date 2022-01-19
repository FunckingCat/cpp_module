#include "Fixed.hpp"

const int Fixed::raw = 8;

/* Constructors */

Fixed::Fixed(): fixed_val(0)
{
}

Fixed::Fixed(int const val)
{
	this->fixed_val = val << Fixed::raw;
}

Fixed::Fixed(float const val)
{
	this->fixed_val = roundf(val * (1 << Fixed::raw));
}

Fixed::Fixed(const Fixed &old)
{
	this->fixed_val = old.getRawBits();
}

Fixed::~Fixed()
{
}

/* OverLoads */

Fixed& Fixed::operator= (const Fixed &old)
{
	this->fixed_val = old.getRawBits();
	return (*this);
}

/* Methods */

int Fixed::getRawBits( void ) const
{
	return (this->fixed_val);
}

void Fixed::setRawBits( int const raw )
{
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

/* Stream Overload */

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}