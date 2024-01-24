#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {
    std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm():target("Default")
{

}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string &RobotomyRequestForm::getTarget() const {
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::NotSignedException();

    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();

    std::cout << "Making drilling noises..." << std::endl;

    if (std::rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed for target: " << target << std::endl;
}

 RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
     if (this == &rhs)
		return *this;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), target(src.getTarget())
{
    *this = src;
    return ;
}

