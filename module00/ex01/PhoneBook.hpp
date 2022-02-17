#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		max;
	int		current;
public:
	PhoneBook();
	~PhoneBook();

	void	add(void);
	void	print(int index);
	void	search(void);
};

#endif