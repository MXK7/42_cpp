#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cmath>
# include <iostream>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN "\033[36m"
#define COLOR_WHITE "\033[37m"

class ClapTrap
{
  private:
	std::string name;
	unsigned int health;
	unsigned int energy;
	unsigned int damage_attack;

  public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif