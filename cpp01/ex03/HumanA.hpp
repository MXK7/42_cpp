#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
  private:
	std::string name;
	Weapon &weapon;

  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void);
};

#endif
