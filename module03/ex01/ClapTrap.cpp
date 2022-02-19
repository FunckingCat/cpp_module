#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name)
{
	std::cout << "New CalpTrap " << name << " constructed\n";
	this->name = name;
	this->hitpoints = 10;
	this->energy = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "New CalpTrap " << clap.name << " cloned\n";
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "New CalpTrap " << clap.name << " cloned throught =\n";
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "CalpTrap " << name << " destroyed\n";
}

void ClapTrap::attack(str const & target)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target 
			<<", causing " << this->attack_damage << " points of damage!\n";
		this->energy--;
	}
	else if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << ": cant attack, it is destroyed\n";
	else
		std::cout << "ClapTrap " << this->name << ": not enought energy to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	if (this->hitpoints < 0)
		this->hitpoints = 0;
	std::cout << "ClapTrap " << this->name << " takes "
		<< amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		this->hitpoints += amount;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " repaired! Its health now is "
		<< this->hitpoints <<"!\n";
	}
	else if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << ": cant be repaired, it is destroyed\n";
	else
	{
		std::cout << "ClapTrap " << this->name << ": not enought energy to repair\n";
	}
}
