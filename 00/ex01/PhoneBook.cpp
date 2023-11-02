#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	len = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::Add()
{
	std::string string;
	int index = len % 8;

	std::cout<< "\nEnter name: ";
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetName(string);

	std::cout<< "\nEnter surname: ";
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetSurname(string);

	std::cout<< "\nEnter nickname: ";
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetNickname(string);

	std::cout<< "\nEnter phone number: ";
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetNumber(string);

	std::cout<< "\nEnter secret:" ;
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetSecret(string);

	len++;
}

std::string PhoneBook::CreateCollumn(std::string string)
{
	if (string.length() <= 10)
		return string;
	else
		string = string.substr(0, 9);
	string.append(".");
	return string;
}

void PhoneBook::Search()
{

	if (len == 0)
	{
		std:: cout << "No contacts saved\n";
		return ;
	}
	std::cout << "\n     Index|      Name|   Surname|  Nickname\n";

	int i = 0;
	std::string str;
	while (i < len && i < 8)
	{
		std::cout << std::setw(10);
  		std::cout << i;
		std::cout << "|";

		str = CreateCollumn(contacts[i].GetName());
		std::cout << std::setw(10);
  		std::cout << str;
		std::cout << "|";

		str = CreateCollumn(contacts[i].GetSurname());
		std::cout << std::setw(10);
  		std::cout << str;
		std::cout << "|";

		str = CreateCollumn(contacts[i].GetNickname());
		std::cout << std::setw(10);
  		std::cout << str;
		std::cout << std::endl;
		i++;
	}

	std::cout << "Which index would you like to see?\n";
	std::cin >> i;

	if (i >= len || i > 7 || i < 0)
		std::cout << "Index out of bounds\n";
	else if (std::cin.fail())
	{
		std::cout << "Invalid index Error\n";
		std::cin.clear();
		exit(1);
	}
	else
	{
		std::cout << "Index: " << i << std::endl;
		std::cout << "Name: " << contacts[i].GetName() << std::endl;
		std::cout << "Surname: " << contacts[i].GetSurname() << std::endl;
		std::cout << "Nickname: " << contacts[i].GetNickname() << std::endl;
	}
}
