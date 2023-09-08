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
Kaydedilen kisileri bir 4 sütun listesi olarak görüntüleyin: dizin, ad, soyadý
ve takma ad.
Her sütun 10 karakter genisliginde olmalýdýr. Bir çizgi karakteri (’|’) onlarý
ayýrýr. Metin saga hizalý olmalýdýr. Metin sütundan daha uzunsa, kýsaltýlmalý
ve görüntülenebilir son karakter bir nokta (’.’) ile degistirilmelidir.
Ardýndan, görüntülenecek girdinin dizinini kullanýcýdan tekrar isteyin. Dizin
aralýk dýsýnda veya yanlýssa, ilgili bir tepki tanýmlayýn. Aksi takdirde, her
satýrda bir alan olacak sekilde kisi bilgilerini görüntüleyin.
	*/
}
