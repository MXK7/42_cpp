#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructor called" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR] " << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING] " << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO] " << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] " << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*ptr)();
	std::string levels[4] = {
		"ERROR",
		"WARNING",
		"INFO",
		"DEBUG"
	};

	ptr functions[4] = {
		&Harl::error,
		&Harl::warning,
		&Harl::info,
		&Harl::debug,
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
    std::cerr << "[UNKNOWN] " << level << std::endl;
	return ;
}