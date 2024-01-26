#include "Array.hpp"
class Awesome
{
    public:
    Awesome( void ) : _n( 42 ) { return; }
    Awesome( int num ) : _n( num ) { return; }
    int get( void ) const { return this->_n; }
    private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
    o << rhs.get();
    return o;
}
int main() {
    try
    {
    Array<int> intArray(5);
    for (size_t i = 0; i < intArray.size(); ++i)
        std::cout<<intArray[i]<<" ";
    std::cout<<std::endl;
    //std::cout<<intArray[6];
    for (size_t i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 10;

    for (size_t i = 0; i < intArray.size(); ++i)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;
    intArray[0] = 42;
    std::cout << intArray[0] << std::endl;
    std::cout << intArray << std::endl;
    Array<double> doubleArray(3);

    for (size_t i = 0; i < doubleArray.size(); ++i)
        doubleArray[i] = i * 3.14;

    for (size_t i = 0; i < doubleArray.size(); ++i)
        std::cout << doubleArray[i] << " ";

    std::cout << std::endl;

    Array<Awesome> awesomeArray(3);

    awesomeArray[0] = Awesome();
    awesomeArray[1] = Awesome(123);
    awesomeArray[2] = Awesome();

    std::cout << awesomeArray << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

