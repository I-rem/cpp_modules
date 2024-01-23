#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

	const std::string &getTarget() const;
    virtual void execute(const Bureaucrat& executor) const;

private:
    const std::string target;
};

#endif

