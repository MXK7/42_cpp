#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::setVar(std::string var, const std::string &value)
{
	if (var == "first_name")
		this->_first_name = value;
	if (var == "last_name")
		this->_last_name = value;
	if (var == "nickname")
		this->_nickname = value;
	if (var == "phone_number")
		this->_phone_number = value;
	if (var == "darkest")
		this->_darkest = value;
	return ;
}

std::string Contact::getVar(std::string var)
{
	if (var == "first_name")
		return (this->_first_name);
	if (var == "last_name")
		return (this->_last_name);
	if (var == "nickname")
		return (this->_nickname);
	if (var == "phone_number")
		return (this->_phone_number);
	if (var == "darkest")
		return (this->_darkest);
	return ("");
}
