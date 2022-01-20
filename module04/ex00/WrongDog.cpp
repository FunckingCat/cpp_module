#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	this->type = str("WrongDog");
	std::cout << "It's WrongDog!!!\n";
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDogge died((((\n";
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Auf - auf\n";
}

WrongDog::WrongDog(const WrongDog &old)  : WrongAnimal(old)
{
	this->type = old.getType();
}

WrongDog& WrongDog::operator= (const WrongDog &other)
{
	this->type = other.getType();
	return(*this);
}
