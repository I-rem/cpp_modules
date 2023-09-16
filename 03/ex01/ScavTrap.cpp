#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->Name = "Noname";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->Name = rhs.Name;
    this->Name = rhs.HitPoints;
    this->Name = rhs.EnergyPoints;
    this->Name = rhs.AttackDamage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0 || this-> EnergyPoints == 0)
        return ;
    this->EnergyPoints--;
    std::cout << "ScavTrap: " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->HitPoints == 0 || this-> EnergyPoints == 0)
        return ;
    std::cout << "ScavTrap: " << this->Name << " is now in Gate Keeper mode." << std::endl;
}
