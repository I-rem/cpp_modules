#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    Bureaucrat();
    ~Bureaucrat();

    std::string getName();
    int getGrade();
    void incrementGrade();
    void decrementGrade();
	void signForm(Form form);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat bureaucrat);

#endif

