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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned())
        throw AForm::NotSignedException();

    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();

    std::string filename = target + "_shrubbery"; // Construct filename directly

    std::ofstream file(filename.c_str(), std::ios::out); // Open file using filename.c_str()

    if (!file.is_open()) {
        throw std::runtime_error("Failed to create shrubbery file");
    }

    file << "   ,@@@@@@@,\n"
        << "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        << "`&%\\ ` /%&'    |.|        \\ '|8'\n"
        << "    |o|        | |         | |\n"
        << "    |.|        | |         | |\n"
        << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

    file.close();

    std::cout << "Shrubbery creation form executed successfully for target: " << target << std::endl;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this == &rhs)
		return *this;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), target(src.getTarget()) {
    *this = src;
}

