#include "Character.hpp"

Character::Character(std::string name) : 
	name(name), equipped(0)
{
	for (int i = 0; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "New Character " << name << " created!\n";
}

Character::Character(const Character &other) :
	name(other.name), equipped(0)
{
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = other.equipped; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character " << this->name << " cloned!\n";
}

Character::~Character()
{
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	std::cout << "Character " << this->name << " died!\n";
}

Character& Character::operator= (const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = other.equipped; i < INV_SZ; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character " << this->name << " cloned(=)!\n";
	return (*this);
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (this->equipped >= INV_SZ || m == nullptr)
	{
		std::cout << this->name << ": can't store it!\n";
		return ;
	}
	for (int i = 0; i < this->equipped; i++)
	{
		if (this->inventory[i] == m)
		{
			std::cout << this->name << ": its already is my inventory!\n";
			return ;
		}
	}
	this->inventory[this->equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->equipped--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}
