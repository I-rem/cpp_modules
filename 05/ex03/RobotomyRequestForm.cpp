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

RobotomyRequestForm::RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs): target(rhs.getTarget())
{
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): target(src.getTarget())
{
    *this = src;
    return ;
}
