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

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

public:
    Fixed(void);
    //Fixed() -> parametre ekle
    Fixed(Fixed const & src);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();

    Fixed& operator(Fixed const &rhs);
private:
    int num;
    const static int bits; // De�eri her zaman tamsay� 8 olacakt�r.
#endif
