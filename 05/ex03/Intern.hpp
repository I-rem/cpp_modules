#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern& operator=(const Intern &rhs);

		AForm  *makeForm(std::string const &type, std::string const &target);
        AForm* createShrubberyForm(const std::string& target) const;
        AForm* createRobotomyForm(const std::string& target) const;
        AForm* createPresidentialForm(const std::string& target) const;
};
#endif
