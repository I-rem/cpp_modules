#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->Name = "Noname";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
    *this = src;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Frag Trap copy assignment operator called" << std::endl;
    this->Name = rhs.Name;
    this->Name = rhs.HitPoints;
    this->Name = rhs.EnergyPoints;
    this->Name = rhs.AttackDamage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->HitPoints == 0 || this-> EnergyPoints == 0)
        return ;
    std::cout << this->Name << " wants a high five" << std::endl;
}
