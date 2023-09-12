#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(FragTrap const &src);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
