#include "ScalarConverter.hpp"

int main() {
    try {
        char charLiteral = ScalarConverter::toChar("A");
        int intLiteral = ScalarConverter::toInt("42");
        float floatLiteral = ScalarConverter::toFloat("3.14");
        double doubleLiteral = ScalarConverter::toDouble("2.718");

        std::cout << "Char: " << charLiteral << std::endl;
        std::cout << "Int: " << intLiteral << std::endl;
        std::cout << "Float: " << floatLiteral << std::endl;
        std::cout << "Double: " << doubleLiteral << std::endl;

        char invalidChar = ScalarConverter::toChar("XYZ");
        int invalidInt = ScalarConverter::toInt("abc");

        std::cout << "Invalid Char: " << invalidChar << std::endl;
        std::cout << "Invalid Int: " << invalidInt << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

