#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = str("Dog");
	std::cout << "It's dog!!!\n";
}

Dog::~Dog()
{
	std::cout << "Dogge died((((\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Auf - auf\n";
}

Dog::Dog(const Dog &old)  : Animal(old)
{
	this->type = old.getType();
}

Dog& Dog::operator= (const Dog &other)
{
	this->type = other.getType();
	return(*this);
}
