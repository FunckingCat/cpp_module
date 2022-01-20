#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Animal
{
private:
protected:
	str type;
public:
	Animal();
	Animal(const Animal &old);
	virtual ~Animal();

	str	getType(void) const;
	Animal& operator= (const Animal &other);
	virtual void	makeSound(void) const = 0;
};

#endif