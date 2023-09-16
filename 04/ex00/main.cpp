#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->getType();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "//... \n";
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    l->makeSound();
    wrong->makeSound();

    return 0;
}
