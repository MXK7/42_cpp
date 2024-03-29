#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::setVar(std::string Contact::*var, const std::string &value)
{
	this->*var = value;
}

std::string Contact::getVar(std::string Contact::*var)
{
	return (this->*var);
}
