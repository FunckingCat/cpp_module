#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(Cure const &other):
	AMateria("cure")
{
	this->type = other.type;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals  " << target.getName() << "'s wounds *" << std::endl;
}