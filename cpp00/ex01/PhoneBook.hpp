#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <string>

# define MAX_CONTACTS 8

class PhoneBook
{
  private:
	Contact contacts_[8];

  public:
	void search(void);
	void list(void);
};

#endif
