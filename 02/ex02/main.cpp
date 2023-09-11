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

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
