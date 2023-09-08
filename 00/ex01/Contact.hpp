#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact{

	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	number;
		std::string	darkest_secret;
	public:
		Contact();
		~Contact();
		void SetName(std::string name);
		void SetSurname(std::string surname);
		void SetNickname(std::string nickname);
		void SetNumber(std::string number);
		void SetSecret(std::string secret);
		std::string GetName();
		std::string GetSurname();
		std::string GetNickname();
		std::string GetNumber();
		std::string GetSecret();
};
# endif
