
#include "ScavTrap.hpp"

int main()
{
    ScavTrap trap1;
    trap1.takeDamage(3);

    ScavTrap trap2(trap1);
    trap2.takeDamage(2);

    ScavTrap trap3("S");
    trap3.guardGate();

    return 0;
}
