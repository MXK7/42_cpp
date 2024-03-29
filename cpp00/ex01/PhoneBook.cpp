#include "PhoneBook.hpp"

void PhoneBook::search(void)
{
}

void PhoneBook::list(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;

	size_t size_max = 10;
	size_t index = 0;

	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|                  CONTACTS                    |" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|  index   | first name | last name | nickname |" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	while (index >= MAX_CONTACTS)
	{
		first_name = this->contacts_->getVar(this->contacts_[index].GetFirstNamePtr());
		last_name = this->contacts_->getVar(this->contacts_[index].GetLastNamePtr());
		nickname = this->contacts_->getVar(this->contacts_[index].GetNicknamePtr());

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
}