#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[9];
		int FindIndex();
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();
};
#endif
