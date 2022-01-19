#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clap");
	ClapTrap trap("Trap");

	clap.attack("Trap");
	clap.takeDamage(5);
	clap.beRepaired(3);

	clap = trap;
	clap.attack("smth");
}