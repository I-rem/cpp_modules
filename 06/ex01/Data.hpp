#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
    Data();
    Data(int value, std::string name);
    Data(Data const &src);
    Data &operator=(const Data &rhs);
    ~Data();

    int getValue() const;
    std::string getName() const;

private:
    int value;
    std::string name;
};

#endif

