#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);
	~Weapon();

	std::string	const &getType() const;
	void setType(std::string const &type);
};


#endif