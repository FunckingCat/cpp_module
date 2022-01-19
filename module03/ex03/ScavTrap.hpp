#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

typedef std::string str;

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap();
public:
	ScavTrap(str name);
	ScavTrap(ScavTrap const &clap);
	virtual ~ScavTrap();

	ScavTrap &operator=(ScavTrap const &clap);
	virtual void attack(std::string const & target);
	void guardGate(void);
};

#endif