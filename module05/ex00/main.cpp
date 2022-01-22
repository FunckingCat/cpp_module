#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 69);
	std::cout << bob << std::endl;
	bob.incrementGrade();
	std::cout << bob << std::endl;
	bob.decrementGrade();
	std::cout << bob << std::endl;

	try
	{
		Bureaucrat ross("Ross", 0);
		std::cout << ross << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ross("Ross", 1000);
		std::cout << ross << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ross("Ross", 1);
		std::cout << ross << std::endl;
		ross.incrementGrade();
		std::cout << ross << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ross("Ross", 150);
		std::cout << ross << std::endl;
		ross.decrementGrade();
		std::cout << ross << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}