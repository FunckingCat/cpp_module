#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NB 4

int main()
{
	Animal *animals[NB];

	std::cout << "CREATING ANIMALS\n\n";
	for (size_t i = 0; i < NB; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout <<  std::endl;
	}

	std::cout << "DELETING ANIMALS\n\n";
	for (size_t i = 0; i < NB; i++)
	{
		delete animals[i];
		std::cout <<  std::endl;
	}
}
