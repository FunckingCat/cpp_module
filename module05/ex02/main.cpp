#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat bob("Bob", 70);
	RobotomyRequestForm form ("Alexey");
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