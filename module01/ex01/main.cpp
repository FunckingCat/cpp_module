#include "Zombie.hpp"

int	main(void)
{
	int horde_size = 10;
	Zombie *hord = zombieHorde(horde_size, "Dangvar");

	for (int i = 0; i < horde_size; i++)
	{
		hord[i].announce();
	}
	delete[] (hord);
	return (0);
}