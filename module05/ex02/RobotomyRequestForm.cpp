#include "RobotomyRequestForm.hpp"

std::string const RobotomyRequestForm::name = "Robotomy request";

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form(RobotomyRequestForm::name, 72, 45), target(target) 
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "** mechanical rattling **" << std::endl;
	if (rand() % 2)
		std::cout << "Sucsess! " << this->target <<" turned into a robot!" << std::endl;
	else
		std::cout << "Failure! " << this->target <<" forever be human!" << std::endl;
}