#include "Zombie.hpp"

Zombie::Zombie(): name("default")
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}


void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout<< "Bye bye " << name<<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

