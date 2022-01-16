#include "Contact.hpp"

std::string Contact::field_names[5] = {
	"First name",
	"Last name",
	"Nichkname",
	"Phone number",
	"Daekest secret"
};

Contact::Contact()
{
	for (size_t i = Fields::FirstName; i <= Fields::DarskestSecret; i++)
		this->fields[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_info(int index)
{
	this->index = index;
	for (size_t i = Fields::FirstName; i <= Fields::DarskestSecret; i++)
	{
		std::cout << "$ " << Contact::field_names[i] << ": ";
		std::getline(std::cin, this->fields[i]);
	}
	for (size_t i = Fields::FirstName; i <= Fields::LastName; i++)
	{
		if (this->fields[i].length() == 0)
		{
			for (size_t i = Fields::FirstName; i <= Fields::DarskestSecret; i++)
				this->fields[i] = std::string();
			return (false);
		}
	}
	return (true);
}

void Contact::print()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (size_t i = Fields::FirstName; i <= Fields::Nickname; i++)
	{
		std::cout << "|";
		if (this->fields[i].length() > 10)
			std::cout << this->fields[i].substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->fields[i];
	}
	std::cout << "|" << std::endl;
}

bool Contact::compare(std::string pattern)
{
	for (size_t i = Fields::FirstName; i <= Fields::DarskestSecret; i++)
		if (this->fields[i] == pattern)
			return (true);
	return (false);
}
