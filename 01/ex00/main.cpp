#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1;
    Zombie zombie2;

    zombie1 = zombie2.newZombie("Foo");
    zombie1->announce();
    zombie2.announce();
    zombie2.randomChump("Poo");

    delete zombie1;
    return 0;
}
