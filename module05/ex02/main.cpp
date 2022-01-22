#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 100);
	Form form ("Tax", 100, 99);
	try
	{
		bob.signForm(form);
		bob.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}