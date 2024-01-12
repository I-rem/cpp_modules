#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Attempt to instantiate a Bureaucrat with a grade that is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Attempt to instantiate a Bureaucrat with a grade that is too low";
}

Bureaucrat::Bureaucrat():name("Default"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade):name(name), grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{
	return this->grade;
}

//Remember. Since grade 1 is the highest one and 150 the lowest,
//incrementing a grade 3 should give a grade 2 to the bureaucrat.

void Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): name(src.name), grade(src.grade)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this == &rhs)
		return *this;
    this->grade = rhs.grade;
    return *this;
}


std::ostream & operator<<(std::ostream & os, Bureaucrat bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
