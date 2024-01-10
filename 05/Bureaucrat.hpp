#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const string name;
		int grade;
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		
		std::string getName();
		int getGrade();
		void incrementGrade();
		void decrementGrade();
};
#endif
