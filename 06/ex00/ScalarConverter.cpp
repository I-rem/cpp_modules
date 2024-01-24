#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter():name("Default"), grade(150)
{
}

ScalarConverter::ScalarConverter(const std::string name, int grade):name(name), grade(grade)
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &src): name(src.name), grade(src.grade)
{
    *this = src;
    return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this == &rhs)
		return *this;
    this->grade = rhs.grade;
    return *this;
}


std::ostream & operator<<(std::ostream & os, ScalarConverter bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
