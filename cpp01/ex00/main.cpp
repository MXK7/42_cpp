#include "Zombie.hpp"

int	main(void)
{
    Zombie *Z;

    Z = newZombie("Zombie1");
    Z->announce();
    delete Z;

    randomChump("Zombie2");
	return (0);
}