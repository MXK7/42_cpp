#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <cmath>
# include <iostream>

class FragTrap : public ClapTrap
{
  public:
    FragTrap(std::string name);
    FragTrap(void);
    FragTrap(const FragTrap &other);
    virtual ~FragTrap(void);

    FragTrap &operator=(const FragTrap &other);
    void highFivesGuys(void);
};

#endif