#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define	INV_SZ 4

class Character : public ICharacter
{
private:
	Character();

	std::string	name;
	int			equipped;
	AMateria	*inventory[INV_SZ];
public:
	Character(std::string name);
	Character(const Character &other);
	virtual ~Character();

	Character& operator= (const Character &other);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif