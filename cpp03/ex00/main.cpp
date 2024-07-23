#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Bot");

    clap1.attack("Enemy");
    clap1.takeDamage(10);
    clap1.beRepaired(5);

    ClapTrap clap2;

    clap2 = clap1;
    clap2.attack("Enemy");
    clap2.takeDamage(10);
    clap2.beRepaired(5);

    ClapTrap clap3(clap2);
    
    clap3.attack("Enemy");
    clap3.takeDamage(10);
    clap3.beRepaired(5);

    ClapTrap clap4;

    clap4.attack("Enemy");
    clap4.takeDamage(10);
    clap4.beRepaired(5);

    return 0;
}