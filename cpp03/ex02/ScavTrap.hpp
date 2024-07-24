#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <cmath>
# include <iostream>

class ScavTrap : public ClapTrap
{
  private:
	bool is_gate_keeper_mode;

  public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	
	ScavTrap &operator=(const ScavTrap &other);

	void guardGate(void);
	void attack(const std::string &target);
};

#endif