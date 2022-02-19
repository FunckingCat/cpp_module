#include <iostream>
#include <string>
#include "ClapTrap.hpp"

typedef std::string str;

class FragTrap : virtual public ClapTrap
{
protected:
	FragTrap();
public:
	FragTrap(str name);
	FragTrap(FragTrap const &clap);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &clap);
	void highFivesGuys(void);
};