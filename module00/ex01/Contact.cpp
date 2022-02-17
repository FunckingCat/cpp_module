#include "Contact.hpp"

std::string Contact::field_names[5] = {
	"First name",
	"Last name",
	"Nichkname",
	"Phone number",
	"Darkest secret"
};

Contact::Contact()
{
	for (size_t i = 0; i <= 4; i++)
		this->fields[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_info(int index)
{
	this->index = index;
	for (size_t i = 0; i <= 4; i++)
	{
		std::cout << "$ " << Contact::field_names[i] << ": ";
		std::getline(std::cin, this->fields[i]);
	}
	for (size_t i = 0; i <= 4; i++)
	{
		if (this->fields[i].length() == 0)
		{
			for (size_t i = 0; i <= 4; i++)
				this->fields[i] = std::string();
			return (false);
		}
	}
	return (true);
}

void Contact::print()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (size_t i = 0; i <= 2; i++)
	{
		std::cout << "|";
		if (this->fields[i].length() > 10)
			std::cout << this->fields[i].substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->fields[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::print_full()
{
	if (this->fields[0].length() == 0)
	{
		std::cout << "invalid index" << std::endl;
		return ;
	}
	for (int i = 0; i <= 4; i++)
	{
		std::cout << this->field_names[i] << " : " << this->fields[i] << std::endl;
	}
}

bool Contact::compare()
{
	if (this->fields[0].length() > 0)
		return (true);
	return (false);
}
