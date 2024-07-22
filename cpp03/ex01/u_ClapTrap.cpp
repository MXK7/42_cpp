#include "ClapTrap.hpp"

void ClapTrap::getHealth(void) const
{
	std::cout << this->name << " Health: " << this->health << std::endl;
}

void ClapTrap::getEnergy(void) const
{
	std::cout << this->name << " Energy: " << this->energy << std::endl;
}
