#include "ClapTrap.hpp"

// int main(void)
// {

// 	ClapTrap Jean("Jean");
// 	ClapTrap Alfred("Alfred");

// 	Alfred.attack("Jean");

// 	Jean.takeDamage(1);
// 	Jean.beRepaired(1);

// 	for (int i = 0; i < 11; i++) {
// 		Jean.attack("Alfred");
// 	}
// 	Alfred.beRepaired(100);

// 	Alfred.getEnergy();
// 	Jean.getEnergy();

// 	return 0;
// }

int main()
{
    ClapTrap clap1("Bot");

    clap1.attack("Enemy");
    clap1.takeDamage(10);
    clap1.beRepaired(5);

    //

    ClapTrap clap2;

    clap2 = clap1;
    clap2.attack("Enemy");
    clap2.takeDamage(10);
    clap2.beRepaired(5);

    //

    ClapTrap clap3(clap2);
    
    clap3.attack("Enemy");
    clap3.takeDamage(10);
    clap3.beRepaired(5);

    //

    ClapTrap clap4;

    clap4.attack("Enemy");
    clap4.takeDamage(10);
    clap4.beRepaired(5);

    return 0;
}