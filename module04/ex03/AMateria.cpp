#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Badam! " << type << " materia created!\n";
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Ghhh! " << this->type << " casts into " << target.getName() << "!\n";
}