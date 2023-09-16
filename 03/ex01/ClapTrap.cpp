#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name("Noname")
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->Name = rhs.Name;
    this->Name = rhs.HitPoints;
    this->Name = rhs.EnergyPoints;
    this->Name = rhs.AttackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0 || this-> EnergyPoints == 0)
        return ;
    this->EnergyPoints--;
    std::cout << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0)
        return ;
    this->EnergyPoints--;
    if (amount > this->HitPoints)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
    std::cout << this->Name << " took " << amount << " points of damage. " << this->HitPoints << " HP left." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints == 0 || this-> EnergyPoints == 0)
        return ;
    this->EnergyPoints--;
    this->HitPoints += amount;
    if (this->HitPoints > 100)
        this->HitPoints = 100;
    std::cout << this->Name << " has repaired " << amount << " points of hp. " << this->HitPoints << " HP left." << std::endl;
}
