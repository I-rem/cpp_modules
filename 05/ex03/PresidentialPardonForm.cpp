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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::NotSignedException();

    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (this == &rhs)
		return *this;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), target(src.getTarget())
{
    *this = src;
    return ;
}
