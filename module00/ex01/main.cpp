#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	while (true)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << cmd << " is not a comand\n";
	}
	return (0);
}