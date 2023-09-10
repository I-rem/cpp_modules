#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

// HumanA her zaman silahl� olacakt�r.
class HumanA {
    private:
        std::string name;
        Weapon& weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};
#endif

