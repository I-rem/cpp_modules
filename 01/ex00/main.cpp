#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie zombie0("zombie0");
    zombie0.announce();
    randomChump("Zombie1");
    Zombie* zombie2 = newZombie("zombie2");
    zombie2->announce();
    delete zombie2;
    return 0;
}
