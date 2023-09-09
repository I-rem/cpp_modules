#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
		Zombie(std::string name);
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void randomChump( std::string name );
		Zombie* newZombie( std::string name );
};
#endif
