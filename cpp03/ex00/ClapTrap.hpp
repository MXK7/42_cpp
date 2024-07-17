#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cmath>
# include <iostream>

class ClapTrap
{
  private:
	std::string name;
	int health;
	int energy;
	int damage_attack;

  public:
    ClapTrap();
    ~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif