#include "PhoneBook.hpp"

void PhoneBook::search(void)
{
    std::stringstream   ss;
	std::string         string_index;
    size_t              index;

    std::cout << std::endl << "| ----- SEARCH CONTACT ----- |" << std::endl;

    this->list();

    std::cout << "Contact index: ";
    std::cin >> string_index;
    ss << string_index;
	ss >> index;
    if (ss.fail()) {
        std::cout << "Only integer allowed" << std::endl;
        ss.clear();
        return;
    }
    if (index > 7) {
        std::cout << "Only indexes between 0 and 7 are accepted" << std::endl;
        ss.clear();
        return;
    }

    this->i_contact(index);
    return;
}

void PhoneBook::list(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;

	size_t size_max = 10;
	size_t index = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 CONTACTS                  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  index  |first name | last name | nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	while (index < MAX_CONTACTS)
	{
		first_name = this->contacts_[index].getVar("first_name");
		last_name = this->contacts_[index].getVar("last_name");
		nickname = this->contacts_[index].getVar("nickname");
		
		if (first_name.empty()) {
			index++;
			continue;
		}

		if (first_name.size() > size_max)
			first_name = first_name.substr(0, size_max - 1) + ".";
		if (last_name.size() > size_max)
			last_name = last_name.substr(0, size_max - 1) + ".";
		if (nickname.size() > size_max)
			nickname = nickname.substr(0, size_max - 1) + ".";

		std::cout << "|" << std::right << std::setw(10) << index;
		std::cout << "|" << std::right << std::setw(10) << first_name;
		std::cout << "|" << std::right << std::setw(10) << last_name;
		std::cout << "|" << std::right << std::setw(10) << nickname << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		index++;
	}
    std::cout << std::endl;
	return ;
}

bool PhoneBook::add(size_t index)
{
    std::string input;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                ADD CONTACTS               |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cin.ignore();

	if (!KeyboardInput(index, input, "first_name"))
		return (false);
	if (!KeyboardInput(index, input, "last_name"))
		return (false);
	if (!KeyboardInput(index, input, "nickname"))
		return (false);
	if (!KeyboardInput(index, input, "phone_number"))
		return (false);
	if (!KeyboardInput(index, input, "darkest"))
		return (false);

    std::cout << "Contact created on index " << index << std::endl;
	return (true);
}

bool PhoneBook::KeyboardInput(size_t index, std::string input, std::string var)
{
	std::cout << var + " : ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << var + " is empty" << std::endl;
		return (false);
	}
	this->contacts_[index].setVar(var, input);
	return (true);
}

void PhoneBook::i_contact(size_t index)
{
    if (this->contacts_[index].getVar("first_name").empty()) 
	{
        std::cout << "No contact at this index" << std::endl;
        return;
    }
    std::cout << std::endl << "| ----- CONTACT " << index << " ----- |" << std::endl;
    std::cout << "First name : " << this->contacts_[index].getVar("first_name") << std::endl;
	std::cout << "Last name : " << this->contacts_[index].getVar("last_name") << std::endl;
	std::cout << "Nickname : " << this->contacts_[index].getVar("nickname") << std::endl;
	std::cout << "Phone number : " << this->contacts_[index].getVar("phone_number") << std::endl;
	std::cout << "Darkest : " << this->contacts_[index].getVar("darkest") << std::endl;
    return;
}
