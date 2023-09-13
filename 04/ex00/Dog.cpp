#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
    return ;
}

Dog& Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
     this->type = rhs.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
     std::cout << "Woof woof" << std::endl;
}
