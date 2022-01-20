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
	const Brain *br;
	std::cout << "WOW: Cloning Dog\n";
	br = old.getBrain();
	this->type = old.getType();
	this->brain = new Brain(*br);
}

Dog& Dog::operator= (const Dog &other)
{
	const Brain *br;
	std::cout << "WOW== Cloning Cat\n";
	this->type = other.getType();
	br = other.getBrain();
	this->brain = new Brain(*br);
	return(*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

