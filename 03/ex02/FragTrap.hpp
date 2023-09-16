#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(FragTrap const &src);
        FragTrap& operator=(const FragTrap &rhs);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
