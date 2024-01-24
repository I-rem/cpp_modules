#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
    return "Attempt to instantiate a Form with a grade that is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Attempt to instantiate a Form with a grade that is too low";
}

const char* AForm::NotSignedException::what() const throw() {
    return "Form not signed";
}

char const	*AForm::InvalidFormException::what(void) const throw()
{
	return ("Invalid Form Request");
}

AForm::AForm():name("Default"), sign_grade(150), exec_grade(150), is_signed(false)
{

}

AForm::AForm(const std::string name, int sign_grade, int exec_grade):name(name), sign_grade(sign_grade), exec_grade(exec_grade), is_signed(false)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	else if (sign_grade < 1 ||exec_grade > 150)
		throw GradeTooHighException();
}

AForm::~AForm()
{

}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	 if (bureaucrat.getGrade() <= sign_grade)
        is_signed = true;
	else
        throw GradeTooLowException();
}

std::string AForm::getName() const
{
	return this->name;
}

int AForm::getSignGrade() const
{
	return this->sign_grade;
}

int AForm::getExecGrade() const
{
	return this->exec_grade;
}

bool AForm::getIsSigned() const
{
	return this->is_signed;
}

AForm::AForm(AForm const &src): name(src.name), sign_grade(src.sign_grade),  exec_grade(src.exec_grade), is_signed(src.is_signed)
{
    *this = src;
    return ;
}

AForm& AForm::operator=(const AForm &rhs)
{
	if (this == &rhs)
		return *this;
    this->is_signed = rhs.is_signed;
    return *this;
}


std::ostream & operator<<(std::ostream & os, AForm &form)
{
    os << form.getName() << ", form sign grade: " << form.getSignGrade() << ", form execution grade: " << form.getExecGrade() << ", sign status: " << form.getIsSigned() << std::endl;
    return os;
}
