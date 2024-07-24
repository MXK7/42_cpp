#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->health = 100;
    this->energy = 50;
    this->damage_attack = 20;
    this->is_gate_keeper_mode = false;
    std::cout << "Constructor" << COLOR_MAGENTA << " ScavTrap " << COLOR_RESET << "called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->health = 100;
    this->energy = 50;
    this->damage_attack = 20;
    this->is_gate_keeper_mode = false;
    std::cout << "Constructor" << COLOR_MAGENTA << " ScavTrap " << COLOR_RESET << "called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "Copy constructor" << COLOR_MAGENTA << " ScavTrap " << COLOR_RESET << "called" << std::endl;
    this->is_gate_keeper_mode = src.is_gate_keeper_mode;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor" << COLOR_MAGENTA << " ScavTrap " << COLOR_RESET << "called" << std::endl;  
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "Copy operator" << COLOR_MAGENTA << " ScavTrap " << COLOR_RESET << "called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage_attack = other.damage_attack;
        this->is_gate_keeper_mode = other.is_gate_keeper_mode;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << COLOR_GREEN << "ScavTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET;
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

void        ScavTrap::guardGate(void)
{
    std::cout << COLOR_MAGENTA << "ScavTrap " << COLOR_RESET << COLOR_RED << this->name << COLOR_RESET;
    if (is_gate_keeper_mode)
        std::cout << " is guarding the gate";
    else
        std::cout << " is not guarding the gate";
    std::cout << std::endl;
}
