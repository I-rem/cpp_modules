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

char ScalarConverter::toChar(const std::string& str) {
    if (str.length() == 1 && isprint(str[0])) {
        return str[0];
    } else {
        throw std::invalid_argument("Invalid char literal");
    }
}

int ScalarConverter::toInt(const std::string& str) {
    std::istringstream iss(str);
    int result;
    iss >> result;
    if (iss.fail() || !iss.eof()) {
        throw std::invalid_argument("Conversion to int failed");
    }
    return result;
}

float ScalarConverter::toFloat(const std::string& str) {
    std::istringstream iss(str);
    float result;
    iss >> result;
    if (iss.fail() || !iss.eof()) {
        throw std::invalid_argument("Conversion to float failed");
    }
    return result;
}

double ScalarConverter::toDouble(const std::string& str) {
    std::istringstream iss(str);
    double result;
    iss >> result;
    if (iss.fail() || !iss.eof()) {
        throw std::invalid_argument("Conversion to double failed");
    }
    return result;
}

