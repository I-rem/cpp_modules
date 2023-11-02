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
	if (this != &rhs)
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

bool Fixed::operator==(const Fixed &rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++temp.num;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--temp.num;
	return temp;
}

Fixed& Fixed::operator++()
{
	++this->num;
	return *this;
}

Fixed& Fixed::operator--()
{
	--this->num;
	return *this;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	float result = this->toFloat() + rhs.toFloat();
    return Fixed(result);
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	float result = this->toFloat() - rhs.toFloat();
    return Fixed(result);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	float result = this->toFloat() * rhs.toFloat();
    return Fixed(result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	float result = this->toFloat() / rhs.toFloat();
    return Fixed(result);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
