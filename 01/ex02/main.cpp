#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout<<"str bellek adresi: "<< &str << std::endl;
	std::cout<<"stringPTR bellek adresi: " << stringPTR << std::endl;
	std::cout<<"stringREF bellek adresi: " << &stringREF << std::endl;
	std::cout<<"\nstr de?eri: "<< str << std::endl;
	std::cout<<"stringPTR de?eri: "<< *stringPTR << std::endl;
	std::cout<<"stringREF de?eri: "<< stringREF << std::endl;

}

