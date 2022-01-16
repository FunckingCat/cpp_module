#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->max = 8;
	this->current = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	if (this->current == this->max)
		this->current = 0;
	if (!(this->contacts[this->current].set_info(this->current)))
	{
		std::cout << "Emty contact is not added\n";
		return ;
	}
	this->current++;
}

void	PhoneBook::print(int index)
{
	if (index == -1)
	{
		this->contacts[this->current - 1].print();
		return;
	}
	this->contacts[index].print();
}

bool	PhoneBook::find(std::string str)
{
	for (int i = 0; i < this->max; i++)
	{
		if (this->contacts[i].compare(str))
			return (true);
	}
	return (false);
}

void	PhoneBook::search(void)
{
	std::string str;
	std::cout << "$ string to search: ";
	std::getline(std::cin, str);
	if (str.length() < 1 || !this->find(str))
	{
		std::cout << "Contacts not found\n";
		return;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->max; i++)
	{
		if (this->contacts[i].compare(str))
			this->contacts[i].print();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}


