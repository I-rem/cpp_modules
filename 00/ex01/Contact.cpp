#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::SetName(std::string name)
{
    this->name = name;
}

void Contact::SetSurname(std::string surname)
{
    this->surname = surname;
}

void Contact::SetNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::SetNumber(std::string number)
{
    this->number = number;
}

void Contact::SetSecret(std::string secret)
{
    this->darkest_secret = secret;
}

std::string Contact:: GetName()
{
    return this->name;
}

std::string Contact::GetSurname()
{
    return this->surname;
}

std::string Contact::GetNickname()
{
    return this->nickname;
}

std::string Contact::GetNumber()
{
    return this->number;
}

std::string Contact::GetSecret()
{
    return this->darkest_secret;
}
