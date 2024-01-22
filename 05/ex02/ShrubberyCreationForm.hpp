#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm {
public:
	ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& target);
    virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const PresidentialPardonForm& other);
    ShrubberyCreationForm(const PresidentialPardonForm& other);

	const std::string &getTarget() const;
    void execute(const Bureaucrat& executor) const;

private:
    const std::string target;
    
};

#endif

