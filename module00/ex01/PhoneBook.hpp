#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

#include "Contact.hpp"

class PhoneBook
{
private:
public:
	Contact name;
	PhoneBook(/* args */);
	~PhoneBook();
};

#endif