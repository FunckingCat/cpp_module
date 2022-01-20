#include "Brain.hpp"

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = str(THOUGHT);
	}
	std::cout << "HEEY new Brain created!\n";
}

Brain::Brain(str type)
{
	for (size_t i = 0; i < 100; i++)
	{
		if (type == "Cat")
			this->ideas[i] = str(CAT_THOUGHT);
		else if (type == "Dog")
			this->ideas[i] = str(DOG_THOUGHT);
		else
			this->ideas[i] = str(THOUGHT);
	}
	std::cout << "HEEY new " << type << " Brain created!\n";
}

Brain::~Brain()
{
	std::cout << "UH - Brain deleted\n";
}

Brain::Brain(const Brain &old)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << "Mmm... Brain Cloning\n";
}

Brain& Brain::operator= (const Brain &other)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Zzz... Brain Cloning\n";
	return(*this);
}

const str	Brain::getThought(void) const
{
	return (this->ideas[0]);
}

void		Brain::setThought(str const th)
{
	this->ideas[0] = th;
}
