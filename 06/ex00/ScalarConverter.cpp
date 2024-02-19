#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

const std::string ScalarConverter::toUpperCase(const std::string &var)
{
	std::string tmp = var;
	for (int i = var.length() - 1; i >= 0; i--)
		tmp[i] = toupper(tmp[i]);
	return tmp;
}

bool ScalarConverter::isNan(const std::string &str)
{
	return (toUpperCase(str) == "NAN");
}

void ScalarConverter::toChar(const std::string &str)
{
	char c = 0;
	if (isNan(str)){
		std::cout << "char: impossible" << std::endl;
		return;
	}
	try{
		c = static_cast<char>(atoi(str.c_str()));
	}catch (std::exception &e){
		if (str.length() == 1 && isprint(str[0]))
			c = str[0];
		std::cout << "int : Non displayable" << std::endl;
	}
	std::cout << "char :";
  if (isprint(c)) {
      std::cout << "'" << std::string(1, c).c_str() << "'";
  } else {
      std::cout << "Non Displayable";
  }
  std::cout << std::endl;
}

void ScalarConverter::toInt(const std::string &str)
{
	int n = 0;

	if (isNan(str))
  {
		std::cout << "int : impossible" << std::endl;
		return;
	}
	try{
		n = atoi(str.c_str());
	}catch (std::exception &e){
		if (str.length() == 1 && isprint(str[0]))
    {
			printNumber(str[0], 'i');
			return;
		}
		std::cout << "int: Non displayable" << std::endl;
		return;
	}
	std::cout << "int : " << n << std::endl;
}

void ScalarConverter::toFloat(const std::string &str)
{
	float n = 0;
	if (isNan(str)){
		std::cout << "float :nan" << std::endl;
		return;
	}
	try{
		n = static_cast<float>(atof(str.c_str()));
	}catch (std::exception &e){
		if(str.length() == 0 && isprint(str[0])){
			printNumber(str[0], 'f');
			return;
		}
		std::cout << "Float Non Displayable" << std::endl;
		return;
	}
	if (n == static_cast<int>(n))
		std::cout << "float :" << n << ".0f" << std::endl;
	else
		std::cout << "float :" << n << "f" << std::endl;
}

void ScalarConverter::toDouble(const std::string &str)
{
	double n = 0;
	if(isNan(str))
		std::cout << "double: impossible" << std::endl;
	try{
		n = atof(str.c_str());
	}catch (std::exception &e){
		if (str.length() == 0 && isprint(str[0]))
			printNumber(str[0], 'd');
		std::cout << "double : impossible " << std::endl;
		return;
	}
	if (n == static_cast<int>(n))
		std::cout << "double : " << n << ".0" << std::endl;
	else
		std::cout << "double : " << n << std::endl;
}

void ScalarConverter::printNumber(const char c, char type)
{
	if (type == 'i')
		std::cout << "int : " << static_cast<int>(c) << std::endl;
	else if (type == 'f')
		std::cout << "float :" << static_cast<float>(c) << ".0f" << std::endl;
	else if (type == 'd')
		std::cout << "double :" << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
	toChar(str.c_str());
	toInt(str.c_str());
	toFloat(str.c_str());
	toDouble(str.c_str());
}

