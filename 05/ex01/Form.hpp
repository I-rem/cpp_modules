#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Form {
	private:
	    const std::string name;
	    const int sign_grade;
	    bool is_signed;
	    const int exec_grade;
	
	public:
	    Form(const std::string name, int grade);
	    Form(Form const &src);
	    Form &operator=(const Form &rhs);
	    Form();
	    ~Form();
	
	    std::string getName();
	    int getSignGrade();
	    int getExecGrade();
	    void signForm();
	
	    class GradeTooHighException : public std::exception {
	    public:
	        virtual const char *what() const throw();
	    };
	
	    class GradeTooLowException : public std::exception {
	    public:
	        virtual const char *what() const throw();
	    };
};

std::ostream &operator<<(std::ostream &o, Form bureaucrat);

#endif

