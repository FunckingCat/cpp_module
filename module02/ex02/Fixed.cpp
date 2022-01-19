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

Fixed Fixed::operator+ (Fixed const &old)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + old.getRawBits());
	return (val);
}

Fixed Fixed::operator*(Fixed const &old)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)old.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::raw));
	return (val);
}

Fixed Fixed::operator/(Fixed const &old)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)old.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::raw)) / tmp2);
	return (val);
}

Fixed Fixed::operator- (Fixed const &old)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - old.getRawBits());
	return (val);
}

Fixed Fixed::operator++()
{
	this->fixed_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->fixed_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

bool Fixed::operator> (const Fixed &f)
{
	if (this->getRawBits() > f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator< (const Fixed &f)
{
	if (this->getRawBits() < f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>= (const Fixed &f)
{
	if (this->getRawBits() >= f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<= (const Fixed &f)
{
	if (this->getRawBits() <= f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator== (const Fixed &f)
{
	if (this->getRawBits() == f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!= (const Fixed &f)
{
	if (this->getRawBits() != f.getRawBits())
		return (true);
	else
		return (false);
}

/* Static Methods */

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
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