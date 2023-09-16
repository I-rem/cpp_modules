#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    brain = new Brain();
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
     this->brain = new Brain(*rhs.brain);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
     std::cout << "Woof woof" << std::endl;
}
