#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Contact
{
  private:
		std::string _last_name;
		std::string _first_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest;

	  public:

		Contact(void) {};
		~Contact(void) {};

		void setVar(std::string var, const std::string &value);
		std::string getVar(std::string var);
};

#endif
