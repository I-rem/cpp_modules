#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    //const Animal* meta = new Animal();
    const Animal* k = new Dog();
    const Animal* l = new Cat();
    k->getType();
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    l->makeSound();
    k->makeSound();
    //meta->makeSound();
    std::cout << "//... \n";
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* z = new WrongCat();
    std::cout << z->getType() << " " << std::endl;
    z->makeSound();
    wrong->makeSound();

    return 0;


}
