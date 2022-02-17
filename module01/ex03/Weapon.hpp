#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);
	virtual ~Weapon();

	void setType(std::string const &type);
	std::string const &getType(void) const;
};

#endif