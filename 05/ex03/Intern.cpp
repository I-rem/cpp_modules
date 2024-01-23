#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form* Intern::makeForm(const std::string& formName, const std::string& target) const {
    Form* form = nullptr;

    if (formName == "shrubbery creation") {
        form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << formName << std::endl;
    } else if (formName == "robotomy request") {
        form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << formName << std::endl;
    } else if (formName == "presidential pardon") {
        form = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << formName << std::endl;
    } else {
        std::cout << "Error: Unknown form name" << std::endl;
    }

    return form;
}

