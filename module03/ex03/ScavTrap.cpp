#include "ScavTrap.hpp"

ScavTrap::ScavTrap(str name) : ClapTrap(name)
{
	std::cout << "New ScavTrap " << this->name << " constructed!\n";
	this->hitpoints = 100;
	this->energy = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &clap) : ClapTrap(clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " distructed!\n";
}

void ScavTrap::attack(str const & target)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target 
			<<", causing " << this->attack_damage << " points of damage!\n";
		this->energy--;
	}
	else if (this->hitpoints <= 0)
		std::cout << "ScavTrap " << this->name << ": cant attack, it is destroyed\n";
	else
		std::cout << "ScavTrap " << this->name << ": not enought energy to attack\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " guardGate!\n";
}
