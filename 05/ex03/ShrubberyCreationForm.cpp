#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm():target("Default")
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string &ShrubberyCreationForm::getTarget() const {
    return target;
}

ShrubberyCreationForm::ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs): target(rhs.getTarget())
{
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): target(src.getTarget())
{
    *this = src;
    return ;
}

