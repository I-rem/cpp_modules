#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
     this->type = rhs.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat deconstructor called" << std::endl;
}

void WrongCat::makeSound() const
{
     std::cout << "Meow meow" << std::endl;
}
