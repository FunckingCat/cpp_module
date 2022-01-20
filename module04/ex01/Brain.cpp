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
		else if (type == "dog")
			this->ideas[i] = str(DOG_THOUGHT);
		else
			this->ideas[i] = str(THOUGHT);
	}
	std::cout << "HEEY new Brain created!\n";
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
}

Brain& Brain::operator= (const Brain &other)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return(*this);
}

