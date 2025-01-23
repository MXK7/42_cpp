#include "Zombie.hpp"

int	main(void)
{
	int size = 5;
	Zombie *Z = zombieHorde(5, "Zombie");

    for (int i = 0; i < size; i++)
	{
        Z[i].announce();
	}

	delete [] Z;
	return (0);
}