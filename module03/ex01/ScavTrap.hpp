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

	ScavTrap		&operator=(ScavTrap const &clap);
	virtual void	attack(str const & target);
	void			guardGate(void);
};