#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "ClapTrap";
	health = 10;
	energy = 10;
	damage_attack = 10;
    std::cout << "Constructor default called" << std::endl;  
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;  
}

void ClapTrap::attack(const std::string &target)
{
	this->damage_attack
}
