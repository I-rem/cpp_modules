#include <iostream>
#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("WARNING");
    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("INFO");
    return 0;
}
