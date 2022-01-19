#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(str name) : ClapTrap(name)
{
	std::cout << "DiamondTrap " << this->name << " constructed!\n";
	this->name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clap) : ClapTrap(clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " distructed!\n";
}

void DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap " << this->name << " attack " << target 
		<<", causing " << this->attack_damage << " points of damage!\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->name << " : seems i'm diamond trap...\n";
}
