#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(Ice const &other):
	AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &other)
{
	return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	std::cout << "*  shoots an  " << this->type 
		<< "bolt at" << target.getName() << std::endl;
}
