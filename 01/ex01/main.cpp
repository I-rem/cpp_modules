#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    int N = 3;

    Zombie *horde;

    horde = zombieHorde(N, "John Doe");
    while (--N >= 0)
        horde[N].announce();

    delete [] horde;
    return 0;
}
