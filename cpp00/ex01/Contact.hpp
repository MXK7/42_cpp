#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
  private:
		std::string _last_name;
		std::string _first_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest;

	  public:
	    static std::string Contact::*GetLastNamePtr() { return &Contact::_last_name; }
	    static std::string Contact::*GetFirstNamePtr() { return &Contact::_first_name; }
	    static std::string Contact::*GetNicknamePtr() { return &Contact::_nickname; }
	    static std::string Contact::*GetPhoneNumberPtr() { return &Contact::_phone_number; }
	    static std::string Contact::*GetDarkestPtr() { return &Contact::_darkest; }

		void setVar(std::string Contact::*var, const std::string &value);
		std::string getVar(std::string Contact::*var);
};

#endif
