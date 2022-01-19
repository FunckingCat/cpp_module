#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("Diamond");

	diamond.attack("Shrek");
	diamond.takeDamage(5);
	diamond.beRepaired(3);
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
}