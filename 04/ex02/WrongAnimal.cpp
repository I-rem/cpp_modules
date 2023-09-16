#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    *this = src;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "Wrong Animal copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal deconstructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal make sound" << std::endl;
}
