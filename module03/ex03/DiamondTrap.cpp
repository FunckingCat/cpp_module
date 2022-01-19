#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(str name) : 
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hitpoints = this->FragTrap::hitpoints;
	this->energy = this->ScavTrap::hitpoints;
	this->attack_damage = this->FragTrap::attack_damage;;
	std::cout << "DiamondTrap " << this->name << " constructed!\n"
		<< " Hits: " << this->hitpoints << " DMG: "
		<< this->attack_damage << " Energy: " << this->energy << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clap) : 
	ClapTrap(clap), ScavTrap(clap.name), FragTrap(clap.name)
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
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap "<< this->name << " " << this->ClapTrap::name << " : seems i'm diamond trap...\n";
}
