#ifndef WrongANIMAL_HPP
#define WrongANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal& operator=(const WrongAnimal &rhs);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};
#endif
