#include "Contact.hpp"
#include "PhoneBook.hpp"



int	main(void)
{
    std::string tmp;
    PhoneBook phonebook;

    while (tmp.compare("EXIT"))
    {
        std::cout << "ENTER A COMMAND : ";
        std::cin >> tmp;
        if (tmp.compare("EXIT") == 0)
            break;
        if (tmp.compare("ADD") == 0)
            // TODO ADD CONTACT
        if (tmp.compare("SEARCH") == 0)
            phonebook.search();
        if (tmp.compare("LIST") == 0)
            phonebook.list();
        std::cout << std::endl;
    }
    std::cout << "| ----- SEE YOU ----- |" << std::endl;
	return (0);
}
