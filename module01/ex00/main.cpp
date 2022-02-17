#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb1 = new Zombie("Dangvar");
	Zombie *zomb2 = newZombie("Istgold");

	randomChump("Ingvar");
	zomb1->announce();
	zomb2->announce();
	delete(zomb1);
	delete(zomb2);
	return (0);
}