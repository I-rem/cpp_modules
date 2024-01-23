#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
	private:
	    const std::string name;
	    const int sign_grade;
	    const int exec_grade;
         bool is_signed;

	public:
	    AForm(const std::string name, int sign_grade, int exec_grade);
	    AForm(AForm const &src);
	    AForm &operator=(const AForm &rhs);
	    AForm();
	    ~AForm();

	    std::string getName();
	    int getSignGrade();
	    int getExecGrade();
        bool getIsSigned();
	    void beSigned(Bureaucrat bureaucrat);

        virtual void execute(Bureaucrat &executor) const = 0;

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
		class NotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, AForm bureaucrat);

#endif

