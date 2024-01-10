#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	
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
