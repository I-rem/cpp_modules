#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	try
	{
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
	/* handle exception */
	}
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
	if (grade > 1)
		grade--;	
}

void Bureaucrat::decrementGrade()
{
	if (grade < 150)
		grade++;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->name = rhs.name;
    this->grade = rhs.grade;
    return *this;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
