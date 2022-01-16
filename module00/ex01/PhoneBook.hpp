#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		max;
	int		current;
	bool	find(std::string str);
public:
	PhoneBook();
	~PhoneBook();

	void	add(void);
	void	print(int index);
	void	search(void);
};

#endif