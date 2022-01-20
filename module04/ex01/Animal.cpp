#include "Animal.hpp"

Animal::Animal()
{
	this->type = str("Animal");
	std::cout << "Hmm... new animal created...\n";
}

Animal::~Animal()
{
	std::cout << "Ohhh... animal died...\n";
}

str	Animal::getType (void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << " ** typical animal sound ** \n";
}

Animal::Animal(const Animal &old)
{
	this->type = old.getType();
}

Animal& Animal::operator= (const Animal &other)
{
	this->type = other.getType();
	return(*this);
}

