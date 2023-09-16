#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
    return;
}

Animal& Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound" << std::endl;
}
