#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cmath>
# include <iostream>

# define COLOR_RESET "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_CYAN "\033[36m"
# define COLOR_WHITE "\033[37m"
# define COLOR_BLACK "\033[30m"
# define COLOR_BRIGHT_BLACK "\033[90m"
# define COLOR_BRIGHT_RED "\033[91m"
# define COLOR_BRIGHT_GREEN "\033[92m"
# define COLOR_BRIGHT_YELLOW "\033[93m"
# define COLOR_BRIGHT_BLUE "\033[94m"
# define COLOR_BRIGHT_MAGENTA "\033[95m"
# define COLOR_BRIGHT_CYAN "\033[96m"
# define COLOR_BRIGHT_WHITE "\033[97m"

class ClapTrap
{
  protected:
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