#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
/*
Header�da implement edilen herhangi bir fonksiyon (templateler hari�), ve korunmayan
headerlar 0 puan anlam�na gelir.
*/
class PhoneBook{
	private:
		Contact contacts[9];
	public:
		PhoneBook();
		~PhoneBook();
		Add();
		Search();
};
#endif
