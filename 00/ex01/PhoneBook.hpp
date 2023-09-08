#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[9];
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();
};
#endif
