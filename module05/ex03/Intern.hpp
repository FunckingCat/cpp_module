#ifndef INTERN_HPP
#define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	static const std::string form_types[3];
	enum types {
		ROBOTOMY = 0,
		PARDON,
		SHURBERRY,
	};
public:
	Intern();
	Intern(Intern const &other);
	virtual ~Intern();

	class FormDoesNotExistException: public std::exception {
		virtual const char* what() const throw();
	};

	Intern &operator=(Intern const &other);
	Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif