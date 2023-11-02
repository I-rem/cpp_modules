#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
	private:
		Contact contacts[9];
		int len;
		std::string CreateCollumn(std::string);
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();
};
#endif
