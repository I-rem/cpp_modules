#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
	private:
		Contact contacts[9];
		int FindIndex();
		int len;
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();
};
#endif
