#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cstring>
# include <cctype>
# include <iostream>

class ScalarConverter {
public:
	ScalarConverter();
  ScalarConverter(ScalarConverter const &src);
  ScalarConverter &operator=(const ScalarConverter &rhs);
  ~ScalarConverter();

  static void convert(const std::string &str);
private:
	static void toChar(const std::string& str);
	static void toInt(const std::string& str);
	static void toFloat(const std::string& str);
	static void toDouble(const std::string& str);
	static void printNumber(const char c, char type);
	static bool isNan(const std::string& str);
	static const std::string toUpperCase(const std::string& var);
};

#endif
