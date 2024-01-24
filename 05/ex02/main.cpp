#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
   try {
        Bureaucrat highGradeBureaucrat("John Doe", 1);

        ShrubberyCreationForm shrubberyForm("Garden");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Criminal");

        highGradeBureaucrat.signForm(shrubberyForm);
        highGradeBureaucrat.signForm(robotomyForm);
        highGradeBureaucrat.signForm(pardonForm);

        highGradeBureaucrat.executeForm(shrubberyForm);
        highGradeBureaucrat.executeForm(robotomyForm);
        highGradeBureaucrat.executeForm(pardonForm);

        Bureaucrat lowGradeBureaucrat("Low", 100);
        lowGradeBureaucrat.signForm(shrubberyForm);
        lowGradeBureaucrat.executeForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}


