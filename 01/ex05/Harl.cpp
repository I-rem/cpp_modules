#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug( void )
{
    std::cout << "7XL-çift peynirli-üçlü turþu-özel-ketçaplý burgerime fazladan domuz pastýrmasý yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "Ekstra domuz pastýrmasý eklemenin daha fazla paraya mal olduðuna inanamýyorum. Burgerime yeterince pastýrma koymadýnýz! Yapsaydýnýz, daha fazlasýný istemezdim!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "Bence bedavaya fazladan pastýrma yemeyi hak ediyorum. Ben yýllardýr geliyorum, sen geçen aydan beri burada çalýþmaya baþladýn." << std::endl;
}

void Harl::error( void )
{
    std::cout << "Bu kabul edilemez! Þimdi müdürle konuþmak istiyorum." << std::endl;
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
