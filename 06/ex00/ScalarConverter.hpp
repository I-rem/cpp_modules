#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);
    ScalarConverter &operator=(const ScalarConverter &rhs);
    ~ScalarConverter();
    
    static void convert(const std::string &str);
    
    static char toChar(const std::string& str);
    static int toInt(const std::string& str);
    static float toFloat(const std::string& str);
    static double toDouble(const std::string& str);
};

#endif

