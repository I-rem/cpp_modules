#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{

}

HumanA::~HumanA()
{

}


void HumanA::attack()
{
    if (this->weapon.getType() == "")
        std::cout << name << " attacks with nothing" << std::endl;
    else
        std::cout << name << " attacks with their " << this->weapon.getType()  << std::endl;
}
