#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define ROBOTOMY  "Robotomy request"
#define PARDON    "Presidential pardon"
#define SHURBERRY "Shrubbery creation"

int main(void)
{
	srand(time(NULL));
	Intern someIntern;

	Bureaucrat boss("Boss", 1);
	std::cout << boss << std::endl;
	Bureaucrat bob("Bob", 25);
	std::cout << bob << std::endl;
	std::cout << "---------------------------" << std::endl;
	Form *shrub = someIntern.makeForm(SHURBERRY, "home");
	std::cout << *shrub << std::endl;
	boss.signForm(*shrub);
	bob.executeForm(*shrub);
	std::cout << "---------------------------" << std::endl;
	Form *pres = someIntern.makeForm(PARDON, "Bob");
	std::cout << *pres << std::endl;
	boss.signForm(*pres);
	boss.executeForm(*pres);
	std::cout << "---------------------------" << std::endl;
	Form *robot = someIntern.makeForm(ROBOTOMY, "Ilon");
	std::cout << *robot << std::endl;
	boss.signForm(*robot);
	bob.executeForm(*robot);

	std::cout << "---------------------------" << std::endl;

	try
	{
		Form *ran = someIntern.makeForm("Random Form", "nobody");
		std::cout << ran << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}