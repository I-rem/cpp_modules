#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Unnamed";
}

Zombie::Zombie(std::string name)
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

