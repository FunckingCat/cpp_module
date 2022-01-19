#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("Scav");

	scav.attack("Shrek");
	scav.guardGate();
	scav.takeDamage(5);
	scav.beRepaired(3);
}