/*
Þu andan itibaren, aksi açýkça belirtilmedikçe, tüm sýnýflarýnýz Ortodoks Kanonik
Form’da tasarlanmalýdýr. Ardýndan, aþaðýdaki dört gerekli üye iþlevini uygulayacaklar:
• Varsayýlan yapýcý
• Kopyalama Kurucusu
• Atama operatörünü kopyalama
• Yýkýcý
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
    const static int bits; // Deðeri her zaman tamsayý 8 olacaktýr.
#endif
