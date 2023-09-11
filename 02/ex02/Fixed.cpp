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
