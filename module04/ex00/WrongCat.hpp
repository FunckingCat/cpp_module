#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(WrongCat const &old);
	virtual ~WrongCat();

	WrongCat& operator= (const WrongCat &other);
	void	makeSound(void) const;
};

#endif