#include <iostream>
# include <cmath>

class Fixed
{
private:
	static const int raw;
	int fixed_val;
public:
	Fixed();
	Fixed(int const val);
	Fixed(float const val);
	Fixed(const Fixed &old);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator= (const Fixed &old);
	bool operator> (const Fixed &f);
	bool operator< (const Fixed &f);
	bool operator>= (const Fixed &f);
	bool operator<= (const Fixed &f);
	bool operator== (const Fixed &f);
	bool operator!= (const Fixed &f);
	Fixed operator+ (const Fixed &old);
	Fixed operator- (const Fixed &old);
	Fixed operator* (const Fixed &old);
	Fixed operator/ (const Fixed &old);
	Fixed operator++ (void);
	Fixed operator++ (int);
	Fixed operator-- (void);
	Fixed operator-- (int);

	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(Fixed const &a, Fixed const &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);