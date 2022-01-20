#include "Character.hpp"

Character::Character(std::string name) : 
	name(name), equipped(0)
{
	for (size_t i = 0; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "New Character " << name << " created!\n";
}

Character::Character(const Character &other) :
	name(other.name), equipped(0)
{
	for (size_t i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (size_t i = other.equipped; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character " << this->name << " cloned!\n";
}

Character::~Character()
{
}

Character& Character::operator= (const Character &other)
{
	this->name = other.name;
	for (size_t i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (size_t i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (size_t i = other.equipped; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character " << this->name << " cloned(=)!\n";
	return (*this);
}

