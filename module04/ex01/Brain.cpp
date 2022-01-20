#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "HEEY new Brain created!\n";
}

Brain::~Brain()
{
	std::cout << "UH - Brain deleted\n";
}

Brain::Brain(const Brain &old)
{
}

Brain& Brain::operator= (const Brain &other)
{
	return(*this);
}

