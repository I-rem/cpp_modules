#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

class ScalarConverter {
private:
    const std::string name;
    int grade;

public:
    ScalarConverter(const std::string name, int grade);
    ScalarConverter(ScalarConverter const &src);
    ScalarConverter &operator=(const ScalarConverter &rhs);
    ScalarConverter();
    ~ScalarConverter();
};

std::ostream &operator<<(std::ostream &o, ScalarConverter bureaucrat);

#endif

