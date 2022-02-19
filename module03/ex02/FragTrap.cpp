#include "FragTrap.hpp"

FragTrap::FragTrap(str name) : ClapTrap(name)
{
	std::cout << "New FragTrap " << this->name << " constructed!\n";
	this->name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &clap) : ClapTrap(clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

FragTrap &FragTrap::operator=(FragTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " distructed!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " : Hey Guys! High FIVE!\n";
}
