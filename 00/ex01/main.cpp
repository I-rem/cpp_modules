#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;
	std::string	command;

	while (command != "EXIT")
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;

		if (command == "ADD")
			phoneBook.Add();
		else if (command == "SEARCH")
			phoneBook.Search();
	}
	return (0);
}
