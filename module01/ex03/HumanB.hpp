#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;
public:
	HumanB(std::string const &name);
	virtual ~HumanB();

	void setWeapon(const Weapon &weapon);
	void attack(void) const;
};

#endif