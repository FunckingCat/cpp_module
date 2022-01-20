#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = str("Dog");
	this->brain = new Brain(this->type);
	std::cout << "It's dog!!!\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dogge died((((\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Auf - auf\n";
}

Dog::Dog(const Dog &old)  : Animal(old)
{
	std::cout << "WOW: Cloning Dog\n";
	this->type = old.getType();
}

Dog& Dog::operator= (const Dog &other)
{
	std::cout << "WOW== Cloning Cat\n";
	this->type = other.getType();
	return(*this);
}
