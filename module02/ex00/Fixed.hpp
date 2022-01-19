#include <iostream>

class Fixed
{
private:
	static const int raw;
	int fixed_val;
public:
	Fixed();
	Fixed(const Fixed &old);
	~Fixed();

	Fixed operator= (const Fixed &old);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};