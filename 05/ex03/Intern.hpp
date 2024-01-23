#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();

    Form* makeForm(const std::string& formName, const std::string& target) const;
};

#endif // INTERN_HPP

