#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Ohhh... animal died...\n";
}

str	Animal::getType (void) const
{
	return (this->type);
}

Animal& Animal::operator= (const Animal &other)
{
	this->type = other.getType();
	return(*this);
}
