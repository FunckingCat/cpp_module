#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NB 4

int main()
{
	Animal *animals[NB];

	std::cout << "\nCREATING ANIMALS\n";
	for (size_t i = 0; i < NB; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout <<  std::endl;
	}

	std::cout << "\n----------------\n";
	std::cout << "\nREADING THOUGHTS\n";
	
	Cat basic;
	Cat clon(basic);

	std::cout << basic.getBrain()->getThought() << std::endl;
	std::cout << clon.getBrain()->getThought() << std::endl;

	basic.getBrain()->setThought("Want to play a ball");

	std::cout << basic.getBrain()->getThought() << std::endl;
	std::cout << clon.getBrain()->getThought() << std::endl;

	std::cout << "\n----------------\n";

	std::cout << "\nDELETING ANIMALS\n";
	for (size_t i = 0; i < NB; i++)
	{
		delete animals[i];
		std::cout <<  std::endl;
	}
	std::cout << "\n----------------\n";
}
