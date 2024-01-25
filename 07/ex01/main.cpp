#include "iter.hpp"
#include <iostream>

class Awesome
{
    public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    private:
    int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(int);
    std::cout << "Iterating over int array: " << std::endl;
    iter(intArray, intArrayLength, print<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(double);
    std::cout << "Iterating over double array: " << std::endl;
    iter(doubleArray, doubleArrayLength, print<double>);
    std::cout << std::endl;

    std::string stringArray[] = {"apple", "orange", "banana"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(std::string);
    std::cout << "Iterating over string array: " << std::endl;
    iter(stringArray, stringArrayLength, print<std::string>);
    std::cout << std::endl;

    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter( tab, 5, print<int>);
    iter( tab2, 5, print);
    return 0;
}

