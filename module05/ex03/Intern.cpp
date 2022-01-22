#include "Intern.hpp"

const std::string Intern::form_types[3] = {
	"Robotomy request",
	"Presidential pardon",
	"Shrubbery creation"
};

Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "InternException: No such form exists!";
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	int form_type = -1;
	for (int i = types::ROBOTOMY; i <= types::SHURBERRY; i++)
		if (formName == Intern::form_types[i])
			form_type = i;
	switch (form_type)
	{
	case types::ROBOTOMY:
		return (new RobotomyRequestForm(target));
		break;
	case types::PARDON:
		return (new PresidentialPardonForm(target));
		break;
	case types::SHURBERRY:
		return (new ShrubberyCreationForm(target));
		break;
	default:
		throw FormDoesNotExistException();
		break;
	}
}