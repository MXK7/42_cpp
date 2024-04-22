#include "Zombie.hpp"

int	main(void)
{
	Zombie *Z;
	int size;

    size = 5;
	Z = zombieHorde(size, "Zombie");
    for (int i = 0; i < size; i++)
	{
        Z[i].announce();
	}
	delete [] Z;
	return (0);
}