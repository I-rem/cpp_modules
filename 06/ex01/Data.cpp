#include "Data.hpp"

Data::Data() : value(0), name("Default") {}

Data::Data(int value, std::string name) : value(value), name(name) {}

int Data::getValue() const {
    return value;
}

std::string Data::getName() const {
    return name;
}

Data::~Data() {}

Data::Data(Data const &src)
{
    this->name = src.name;
    this->value = src.value;
    *this = src;
    return ;
}

Data& Data::operator=(const Data &rhs)
{
	if (this == &rhs)
		return *this;
    this->name = rhs.name;
    this->value = rhs.value;
    return *this;
}
