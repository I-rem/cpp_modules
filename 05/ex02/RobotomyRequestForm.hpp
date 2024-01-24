#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();

	const std::string &getTarget() const;
    void execute(const Bureaucrat& executor) const;

private:
    const std::string target;

};

#endif

