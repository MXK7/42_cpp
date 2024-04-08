#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact contacts_[MAX_CONTACTS];

	public:
		PhoneBook(void) {};
		~PhoneBook(void) {};

		void search(void);
		void list(void);
		void i_contact(size_t index);
		bool add(size_t index);
		bool KeyboardInput(size_t index, std::string input, std::string var);

};

#endif
