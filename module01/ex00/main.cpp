#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb1 = new Zombie("Dangvar");
	Zombie *zomb2 = new Zombie("Istgold");

	randomChump("Ingvar");
	zomb1->announce();
	zomb2->announce();
	delete(zomb1);
	delete(zomb2);
	return (0);
}