#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = str("WrongAnimal");
	std::cout << "Hmm... new WrongAnimal created...\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Ohhh... WrongAnimal died...\n";
}

str	WrongAnimal::getType (void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " ** typical WrongAnimal sound ** \n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
	this->type = old.getType();
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &other)
{
	this->type = other.getType();
	return(*this);
}

