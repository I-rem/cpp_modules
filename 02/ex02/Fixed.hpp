#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int num;
        const static int bits = 8;

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floating);
        Fixed(const Fixed &src);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator==(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;
        bool operator>(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;

		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator++();
		Fixed& operator--();

        Fixed& operator=(const Fixed &rhs);
        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;

        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const  Fixed& max(const Fixed& a, const Fixed& b);
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif
