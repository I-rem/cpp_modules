#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int num;
        const static int bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &src);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();

        Fixed& operator=(const Fixed &rhs);
};
#endif
