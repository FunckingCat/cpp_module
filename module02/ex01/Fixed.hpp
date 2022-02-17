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

	Fixed &operator= (const Fixed &old);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);