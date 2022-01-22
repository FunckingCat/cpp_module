#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat boss("Boss", 1);
	std::cout << boss << std::endl;
	Bureaucrat bob("Bob", 25);
	std::cout << bob << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	boss.signForm(*shrub);
	bob.executeForm(*shrub);

	Form *pres = new PresidentialPardonForm("Bob");
	std::cout << *pres << std::endl;
	boss.signForm(*pres);
	boss.executeForm(*pres);

	Form *robot = new RobotomyRequestForm("Ilon");
	std::cout << *robot << std::endl;
	boss.signForm(*robot);
	bob.executeForm(*robot);

	std::cout << std::endl;

	try
	{
		bob.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Ilon");
		std::cout << robot << std::endl;
		boss.executeForm(robot);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Bob");
		std::cout << pres << std::endl;
		boss.signForm(pres);
		bob.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Bob");
		std::cout << pres << std::endl;
		boss.signForm(pres);
		bob.executeForm(pres);
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