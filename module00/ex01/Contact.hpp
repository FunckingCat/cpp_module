#ifndef CONTACT_HPP
# define CONTACT_HPP 

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	static std::string field_names[5];
	int	index;
	std::string fields[5];
public:
	Contact();
	~Contact();

	bool set_info(int index);
	void print();
	bool compare();
	void print_full();
};

#endif