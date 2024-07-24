#include "ClapTrap.hpp"

// ! Constructors
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->damage_attack = 0;
    std::cout << "Constructor " << COLOR_GREEN << name << COLOR_RESET << " called" << std::endl;  
}

ClapTrap::ClapTrap(void)
{
	this->name = "ClapTrap";
	this->health = 10;
	this->energy = 10;
	this->damage_attack = 0; 
    std::cout << "Constructor" << COLOR_GREEN << " ClapTrap " << COLOR_RESET << "called" << std::endl;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor" << COLOR_GREEN << " ClapTrap " << COLOR_RESET << "called" << std::endl;  
}

// ! Copy constructor
ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator" << COLOR_GREEN << " ClapTrap " << COLOR_RESET << "called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->damage_attack = other.damage_attack;
		this->energy = other.energy;
		this->health = other.health; 
	}
	return (*this);
}

// ! Member functions
void ClapTrap::attack(const std::string &target)
{
	std::cout << COLOR_GREEN << "ClapTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET;
	if (this->energy > 0 && this->health > 0)
	{
		this->energy -= 1;
    	std::cout << " attacks " << COLOR_CYAN << target << COLOR_RESET << " causing " << this->damage_attack << " points of damage" << std::endl;  
		this->health -= this->damage_attack;
	}	
	else
		std::cout << " is out of energy" << std::endl;  	
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << COLOR_GREEN << "ClapTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET;
	if (this->health > amount)
		this->health -= amount;
	else if (this->health > 0)
		this->health = 0;
	else
	{
		std::cout << " is already dead" << std::endl;  
		return ;
	}
	std::cout << " takes " << COLOR_YELLOW << amount << COLOR_RESET << " points of damage" << std::endl;  
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR_GREEN << "ClapTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET;
	if (this->energy > 0 && this->health > 0)
	{
		std::cout << " is repaired by " << COLOR_YELLOW << amount << COLOR_RESET << " points" << std::endl;  
		this->health += amount;
		this->energy--;
	}
	else
		std::cout << " is out of energy" << std::endl;  	
	return ;
}
