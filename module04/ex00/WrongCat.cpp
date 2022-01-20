#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = str("WrongCat");
	std::cout << "It's WrongCat!!!\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Kit died(((\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meou - meou\n";
}

WrongCat::WrongCat(const WrongCat &old) : WrongAnimal(old)
{
	this->type = old.getType();
}

WrongCat& WrongCat::operator= (const WrongCat &other)
{
	this->type = other.getType();
	return(*this);
}