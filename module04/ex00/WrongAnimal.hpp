#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class WrongAnimal
{
private:
protected:
	str type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &old);
	virtual ~WrongAnimal();

	str	getType(void) const;
	WrongAnimal& operator= (const WrongAnimal &other);
	void	makeSound(void) const;
};

#endif