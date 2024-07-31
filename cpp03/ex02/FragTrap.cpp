#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Constructor" << COLOR_BLACK << " FragTrap " << COLOR_RESET << "called" << std::endl;
	this->energy = 100;
	this->damage_attack = 30;
	this->health = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor" << COLOR_BLACK << " FragTrap " << COLOR_RESET << "called" << std::endl;
	this->energy = 100;
	this->damage_attack = 30;
	this->health = 100;
}
Cat.cpp
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
    std::cout << "Copy constructor" << COLOR_BLACK << " FragTrap " << COLOR_RESET << "called" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor" << COLOR_BLACK << " FragTrap " << COLOR_RESET << "called" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &other) {
    std::cout << COLOR_BLACK << "FragTrap " << COLOR_RESET << "copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage_attack = other.damage_attack;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << COLOR_BLACK << "FragTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET << " requests high fives" << std::endl;
}
