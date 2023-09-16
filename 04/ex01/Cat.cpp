#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat& Cat::operator=(const Cat &rhs)
{
    std::cout << "Catcopy assignment operator called" << std::endl;
     this->type = rhs.type;
     this->brain = new Brain(*rhs.brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
     std::cout << "Meow meow" << std::endl;
}
