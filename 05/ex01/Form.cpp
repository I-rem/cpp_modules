#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
    return "Attempt to instantiate a Form with a grade that is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Attempt to instantiate a Form with a grade that is too low";
}

Form::Form():name("Default"), sign_grade(150), exec_grade(150), is_signed(false)
{

}

Form::Form(const std::string name, int sign_grade, int exec_grade):name(name), sign_grade(sign_grade), exec_grade(exec_grade), is_signed(false)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	else if (sign_grade < 1 ||exec_grade > 150)
		throw GradeTooHighException();
}

Form::~Form()
{

}

void Form::beSigned(Bureaucrat bureaucrat)
{
	 if (bureaucrat.getGrade() <= sign_grade)
        is_signed = true;
	else
        throw GradeTooLowException();
}

std::string Form::getName()
{
	return this->name;
}

int Form::getSignGrade()
{
	return this->sign_grade;
}

int Form::getExecGrade()
{
	return this->exec_grade;
}

bool Form::getIsSigned()
{
	return this->is_signed;
}

Form::Form(Form const &src): name(src.name), sign_grade(src.sign_grade),  exec_grade(src.exec_grade), is_signed(src.is_signed)
{
    *this = src;
    return ;
}

Form& Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return *this;
    this->is_signed = rhs.is_signed;
    return *this;
}


std::ostream & operator<<(std::ostream & os, Form form)
{
    os << form.getName() << ", form sign grade: " << form.getSignGrade() << ", form execution grade: " << form.getExecGrade() << ", sign status: " << form.getIsSigned() << std::endl;
    return os;
}
