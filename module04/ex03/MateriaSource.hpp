#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "IMateriaSource.hpp"

#define	INV_SZ 4

class MateriaSource: public IMateriaSource
{
private:
	int amount;
	AMateria *sources[INV_SZ];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &other);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif