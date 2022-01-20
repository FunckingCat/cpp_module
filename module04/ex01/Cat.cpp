#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = str("Cat");
	std::cout << "It's cat!!!\n";
}

Cat::~Cat()
{
	std::cout << "Kit died(((\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meou - meou\n";
}

Cat::Cat(const Cat &old) : Animal(old)
{
	this->type = old.getType();
}

Cat& Cat::operator= (const Cat &other)
{
	this->type = other.getType();
	return(*this);
}