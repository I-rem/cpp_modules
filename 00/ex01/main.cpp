#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;
	std::string	command;

	while (command.std::string::compare("EXIT"))
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;
	
		if (command.std::string::compare("ADD") == 0)
			phoneBook.Add();
		else if (command.std::string::compare("SEARCH") == 0)
			phoneBook.Search();
	}
	return (0);
}
