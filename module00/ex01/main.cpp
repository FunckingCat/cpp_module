#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook book;
	Contact con;

	con.name = "david";
	book.name = con;
	
	return (0);
}