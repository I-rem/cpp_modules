#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}


ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
    return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		*this = rhs;
    return *this;
}

void ScalarConverter::convert(const string &arg)
{
	
}

char ScalarConverter::toChar(const std::string& str)
{
	
}

int ScalarConverter::toInt(const std::string& str)
{
	
}

float ScalarConverter::toFloat(const std::string& str)
{
	
}

double ScalarConverter::toDouble(const std::string& str)
{
	
}
