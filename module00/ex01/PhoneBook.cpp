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
		std::cout << "Empty contact is not added\n";
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

void	PhoneBook::search(void)
{
	std::string str;
	std::stringstream ss;
	int ind;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->max; i++)
		if (this->contacts[i].compare())
			this->contacts[i].print();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "$ index of the entry to display: ";
	std::getline(std::cin, str);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid index" << std::endl;
			return ; 
		}
	}
	ss << str;
	ss >> ind;
	if (ind < 0 || ind > this->max)
	{
		std::cout << "Invalid index" << std::endl;
		return ; 
	}
	this->contacts[ind].print_full();
}


