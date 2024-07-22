#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->damage_attack = 0;
    std::cout << "Constructor " << name << " called" << std::endl;  
}

ClapTrap::ClapTrap(void)
{
	this->name = "ClapTrap";
	this->health = 10;
	this->energy = 10;
	this->damage_attack = 0; 
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;  
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->damage_attack = other.damage_attack;
		this->energy = other.energy;
		this->health = other.health; 
		std::cout << "Copy operator called" << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy <= 0 || this->health <= 0)
	{
		std::cout << this->name << " is out of energy" << std::endl;  
		return ;
	}
	else
		this->energy -= 1;
    std::cout << this->name << " attacks " << target << " causing " << this->damage_attack << " points of damage" << std::endl;  
	this->health -= this->damage_attack;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy <= 0 || this->health <= 0)
	{
		std::cout << this->name << " is out of energy" << std::endl;  
		return ;
	}
	else
		this->energy -= 1;
	std::cout << this->name << " takes " << amount << " points of damage" << std::endl;  
	this->health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy <= 0 || this->health <= 0)
	{
		std::cout << this->name << " is out of energy" << std::endl;  
		return ;
	}
	else
		this->energy -= 1;
	std::cout << this->name << " is repaired by " << amount << " points" << std::endl;  
	this->health += amount;
}
