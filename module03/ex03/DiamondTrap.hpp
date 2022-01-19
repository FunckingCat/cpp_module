#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

typedef std::string str;

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
protected:
	DiamondTrap();
public:
	DiamondTrap(str name);
	DiamondTrap(DiamondTrap const &clap);
	virtual ~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &clap);
	virtual void attack(std::string const & target);
	void whoAmI(void);
};