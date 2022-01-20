#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = str("Cat");
	this->brain = new Brain(this->type);
	std::cout << "It's cat!!!\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Kit died(((\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meou - meou\n";
}

Cat::Cat(const Cat &old) : Animal(old)
{
	std::cout << "WOW: Cloning Cat\n";
	this->type = old.getType();
}

Cat& Cat::operator= (const Cat &other)
{
	std::cout << "WOW== Cloning Cat\n";
	this->type = other.getType();
	return(*this);
}

Brain	*Cat::getBrain(void)
{
	return (this->brain);
}