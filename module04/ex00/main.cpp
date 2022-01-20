#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	meta->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	delete(meta);
	delete(j);
	delete(i);

	std::cout << "\nWRONG SECTION\n" << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wj = new WrongDog();
	const WrongAnimal* wi = new WrongCat();
	wmeta->makeSound();
	std::cout << wj->getType() << " " << std::endl;
	wj->makeSound();
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	delete(wmeta);
	delete(wj);
	delete(wi);
}
