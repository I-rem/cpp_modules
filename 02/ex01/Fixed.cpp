#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num = 0;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->num = integer << this -> bits;
}

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called" << std::endl;
    this->num = roundf(floating * (1 << bits));
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->getRawBits()) / (1 << bits);
}

int Fixed::toInt( void ) const
{
    return this->num >> bits;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & num)
{
    os << num.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    return this->num;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->num = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
