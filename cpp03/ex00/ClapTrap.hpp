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
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
	
    ClapTrap    &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// TODO: TEST
	void getHealth(void) const;
	void getEnergy(void) const;
};

#endif