#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

std::string Zombie::get_name(void)
{
	return (this->name);
}

void Zombie::set_name(std::string name)
{
	this->name = name;
	return ;
}
