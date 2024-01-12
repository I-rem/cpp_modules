#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const string name;
		int grade;
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
        Bureaucrat& operator=(const Bureaucrat &rhs);
        Bureaucrat::Bureaucrat();
		~Bureaucrat();
		
		std::string getName();
		int getGrade();
		void incrementGrade();
		void decrementGrade();
		
		class GradeTooHighException: public exception
		{
  			virtual const char* what() const throw();
		} tooHigh;

		class GradeTooLowException: public exception
		{
  			virtual const char* what() const throw();
		} tooLow;	
};

std::ostream & operator<<( std::ostream & o, Bureaucrat bureaucrat);
#endif
