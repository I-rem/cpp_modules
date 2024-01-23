#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm {
public:
	ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& target);
    virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);

	const std::string &getTarget() const;
    void execute(const Bureaucrat& executor) const;

private:
    const std::string target;

};

#endif
s
