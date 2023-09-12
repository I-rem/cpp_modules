#include "ClapTrap.hpp"

int main()
{
    ClapTrap trap1;
    ClapTrap trap2("T2");
    ClapTrap trap3(trap2);

    trap1.attack("zombie");
    trap2.attack("human");
    trap3.attack("human2");

    trap1.takeDamage(5);
    trap1.takeDamage(5);
    trap1.attack("someone");
    trap1.beRepaired(3);

    trap2.takeDamage(3);
    trap2.beRepaired(2);

    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.attack("human2");
    trap3.beRepaired(3);
    return 0;
}
