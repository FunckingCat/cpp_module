#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("Diamond");

	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.attack("Shrek");
	diamond.takeDamage(5);
	diamond.beRepaired(3);
}