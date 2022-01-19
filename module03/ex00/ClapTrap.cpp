#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energy = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target 
		<<", causing " << this->attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes "
		<< amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired! Its health now is "
	<< this->hitpoints <<"!\n";
}
