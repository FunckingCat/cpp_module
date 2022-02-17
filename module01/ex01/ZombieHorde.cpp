#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie *hord = new Zombie[N];
	std::stringstream ss;
	for (int i = 0; i < N; i++)
	{
		ss.str(std::string());
		ss << i;
		hord[i].set_name(name + std::string(ss.str()));
	}
	return (hord);
}