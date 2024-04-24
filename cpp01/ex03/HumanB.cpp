#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
		std::cout << this->weapon->getType();
	else
		std::cout << "hands";
	std::cout << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}
