#include "Form.hpp"

Form::Form(std::string const &name, int to_sign, int to_exec):
	name(name),
	is_signed(false),
	grade_to_sign(to_sign),
	grade_to_execute(to_exec)
{
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other):
	name(other.name),
	is_signed(other.is_signed),
	grade_to_sign(other.grade_to_sign),
	grade_to_execute(other.grade_to_execute)
{
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->grade_to_sign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

Form &Form::operator=(Form const &other)
{
	this->is_signed = other.is_signed;
	this->grade_to_execute = other.grade_to_execute;
	this->grade_to_sign = other.grade_to_sign;
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException();
	return (*this);
}

std::string const &Form::getName(void) const
{
	return (this->name);
}

bool Form::isSigned(void) const
{
	return (this->is_signed);
}

int Form::getGradeToSign(void) const
{
	return (this->grade_to_sign);
}

int Form::getGradeToExecute(void) const
{
	return (this->grade_to_execute);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form " << form.getName()
	<< " with grade to sign " << form.getGradeToSign()
	<< " and grade to execute " << form.getGradeToExecute()
	<< " is ";
	if (form.isSigned())
		out << "signed.";
	else
		out << "not signed.";
	return (out);
}