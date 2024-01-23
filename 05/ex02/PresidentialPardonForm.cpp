#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("Presidential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm():target("Default")
{

}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string &PresidentialPardonForm::getTarget() const {
    return target;
}

PresidentialPardonForm::PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs): target(rhs.getTarget())
{
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): target(src.getTarget())
{
    *this = src;
    return ;
}

