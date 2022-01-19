#include "FragTrap.hpp"

FragTrap::FragTrap(str name) : ClapTrap(name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << this->name << " constructed!\n";
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

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->name << " attack " << target 
		<<", causing " << this->attack_damage << " points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " : Hey Guys! High FIVE!\n";
}
