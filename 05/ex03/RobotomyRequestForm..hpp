#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm(const std::string& target);
    virtual ~RobotomyRequestForm();

    void execute(const Bureaucrat& executor) const;

private:
    const std::string target;
};

#endif // ROBOTOMYREQUESTFORM_HPP

