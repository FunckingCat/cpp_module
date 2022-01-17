#include <iostream>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "    str addr: " << &str << std::endl;
	std::cout << "ptr_str addr: " << stringPTR << std::endl;
	std::cout << "ref_str addr: " << &stringREF << std::endl;

	std::cout << "ptr_str: " << *stringPTR << std::endl;
	std::cout << "ref_str: " << stringREF << std::endl;
	return (0);
}