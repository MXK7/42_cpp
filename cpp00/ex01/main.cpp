#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
    std::string tmp;
    PhoneBook phonebook;
    size_t index = 0;

    while (tmp.compare("EXIT"))
    {
        std::cout << "ENTER A COMMAND : ";
        std::cin >> tmp;
        if (tmp.compare("EXIT") == 0)
            break;
        if (tmp.compare("ADD") == 0)
            if (phonebook.add(index))
                index = index < 7 ? index + 1 : 0;
        if (tmp.compare("SEARCH") == 0)
            phonebook.search();
        std::cout << std::endl;
    }
    std::cout << "| ----- SEE YOU ----- |" << std::endl;
	return (0);
}
