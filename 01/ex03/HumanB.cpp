#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
