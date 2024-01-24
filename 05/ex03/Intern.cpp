#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target){
    int i = 0;

    AForm* (Intern::*functions[3])(const std::string&) const = {
    &Intern::createShrubberyForm,
    &Intern::createRobotomyForm,
    &Intern::createPresidentialForm,
};

    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    while (i < 3 && forms[i] != formName)
        i++;

    if (i == 3) {
        std::cerr << "Error: Unknown form name" << std::endl;
        return 0;
    }
    std::cout << "Intern creates " << formName << std::endl;
    return ((this->*functions[i])(target));
}

AForm* Intern::createShrubberyForm(const std::string& target) const {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyForm(const std::string& target) const {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialForm(const std::string& target) const {
    return new PresidentialPardonForm(target);
}

Intern::Intern(Intern const &src)
{
    *this = src;
    return ;
}

Intern& Intern::operator=(const Intern &rhs)
{
	if (this == &rhs)
		return *this;
    return *this;
}


