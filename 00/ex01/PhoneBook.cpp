#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

int	PhoneBook::FindIndex()
{
	int len = 0;

	len = sizeof(contacts) / sizeof(contacts[0]);
	if (len == 8)
		return 0;
	else if (len == 0)
		return len;
	return len - 1;
}

void PhoneBook::Add()
{
	std::string string;
	int index = FindIndex();

	std::cout<< "\nEnter name: ";
	std::getline (std::cin>>std::ws,string);
	contacts[index].SetName(string);

	std::cout<< "\nEnter surname: ";
	std::getline (std::cin,string);
	contacts[index].SetSurname(string);

	std::cout<< "\nEnter nickname: ";
	std::getline (std::cin,string);
	contacts[index].SetNickname(string);

	std::cout<< "\nEnter phone number: ";
	std::getline (std::cin,string);
	contacts[index].SetNumber(string);

	std::cout<< "\nEnter secret:" ;
	std::getline (std::cin,string);
	contacts[index].SetSecret(string);
}

void PhoneBook::Search()
{
	/*
Kaydedilen kisileri bir 4 s�tun listesi olarak g�r�nt�leyin: dizin, ad, soyad�
ve takma ad.
Her s�tun 10 karakter genisliginde olmal�d�r. Bir �izgi karakteri (�|�) onlar�
ay�r�r. Metin saga hizal� olmal�d�r. Metin s�tundan daha uzunsa, k�salt�lmal�
ve g�r�nt�lenebilir son karakter bir nokta (�.�) ile degistirilmelidir.
Ard�ndan, g�r�nt�lenecek girdinin dizinini kullan�c�dan tekrar isteyin. Dizin
aral�k d�s�nda veya yanl�ssa, ilgili bir tepki tan�mlay�n. Aksi takdirde, her
sat�rda bir alan olacak sekilde kisi bilgilerini g�r�nt�leyin.
	*/
}
