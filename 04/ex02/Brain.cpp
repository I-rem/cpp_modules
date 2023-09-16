#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}



Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
    return ;
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = rhs.ideas[i];
        i++;
    }
    return *this;
}

