#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
    protected:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif
