/*
�u andan itibaren, aksi a��k�a belirtilmedik�e, t�m s�n�flar�n�z Ortodoks Kanonik
Form�da tasarlanmal�d�r. Ard�ndan, a�a��daki d�rt gerekli �ye i�levini uygulayacaklar:
� Varsay�lan yap�c�
� Kopyalama Kurucusu
� Atama operat�r�n� kopyalama
� Y�k�c�
Split your class code into two files. The header file (.hpp/.h) contains the class
definition whereas the source file (.cpp) contains the implementation.
*/

/*
�u andan itibaren, aksi a��k�a belirtilmedik�e, t�m s�n�flar�n�z Ortodoks Kanonik
Form�da tasarlanmal�d�r. Ard�ndan, a�a��daki d�rt gerekli �ye i�levini uygulayacaklar:
� Varsay�lan yap�c�
� Kopyalama Kurucusu
� Atama operat�r�n� kopyalama
� Y�k�c�
Split your class code into two files. The header file (.hpp/.h) contains the class
definition whereas the source file (.cpp) contains the implementation.
*/

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed& operator(Fixed const &rhs)
{

}

Fixed:: void getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
