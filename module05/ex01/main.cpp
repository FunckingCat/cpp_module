#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 100);
	std::cout << bob << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(bob);
	std::cout << form1 << std::endl;

	std::cout << "<-------------->" << std::endl;

	Form form2("Bill for rent", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		bob.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << "<-------------->" << std::endl;

	Form form3("Other Paper", 101, 50);
	std::cout << form3 << std::endl;
	bob.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		bob.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << "<-------------->" << std::endl;

	try
	{
		Form formExec("Bill for rent", 99, 50);
		std::cout << formExec << std::endl;
		formExec.beSigned(bob);
		std::cout << formExec << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-------------->" << std::endl;

	try
	{
		Form formExec("Important Form", 1000, 50);
		std::cout << formExec << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-------------->" << std::endl;

	try
	{
		Form formExec("Important Form", 0, 50);
		std::cout << formExec << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-------------->" << std::endl;

	try
	{
		Form formExec("Important Form", 100, 1000);
		std::cout << formExec << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-------------->" << std::endl;

	try
	{
		Form formExec("Important Form", 100, 0);
		std::cout << formExec << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}