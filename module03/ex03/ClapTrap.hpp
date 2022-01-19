#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef std::string str;

class ClapTrap
{
protected:
	ClapTrap();
	str name;
	int	hitpoints;
	int	energy;
	int	attack_damage;
public:
	ClapTrap(str name);
	ClapTrap(ClapTrap const &clap);
	virtual ~ClapTrap();

	ClapTrap &operator=(ClapTrap const &clap);
	virtual void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif