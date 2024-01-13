#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
	private:
	    const std::string name;
	    const int sign_grade;
	    const int exec_grade;
         bool is_signed;

	public:
	    Form(const std::string name, int sign_grade, int exec_grade);
	    Form(Form const &src);
	    Form &operator=(const Form &rhs);
	    Form();
	    ~Form();

	    std::string getName();
	    int getSignGrade();
	    int getExecGrade();
        bool getIsSigned();
	    void beSigned(Bureaucrat bureaucrat);

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, Form bureaucrat);

#endif

