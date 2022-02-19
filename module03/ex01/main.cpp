#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("Scav");

	scav.guardGate();
	scav.attack("This BOY");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("This BOY");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("This BOY");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("This BOY");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("This BOY");
	scav.takeDamage(8);
	scav.beRepaired(2);
}