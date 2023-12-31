#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug( void )
{
    std::cout << "7XL-�ift peynirli-��l� tur�u-�zel-ket�apl� burgerime fazladan domuz past�rmas� yemeyi seviyorum. Ger�ekten seviyorum!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "Ekstra domuz past�rmas� eklemenin daha fazla paraya mal oldu�una inanam�yorum. Burgerime yeterince past�rma koymad�n�z! Yapsayd�n�z, daha fazlas�n� istemezdim!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "Bence bedavaya fazladan past�rma yemeyi hak ediyorum. Ben y�llard�r geliyorum, sen ge�en aydan beri burada �al��maya ba�lad�n." << std::endl;
}

void Harl::error( void )
{
    std::cout << "Bu kabul edilemez! �imdi m�d�rle konu�mak istiyorum." << std::endl;
}

void Harl::complain( std::string level )
{
    int i = 0;

   void (Harl::*functions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
   std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(levels[i] != level)
        i++;
    (this->*functions[i])();
}
