#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void    init_animals(Animal *animals[], int size);
void    print_animals(Animal *animals[], int size);
void    delete_animals(Animal *animals[], int size);

int	main(void)
{

	Animal *animals[SIZE];

	init_animals(animals, SIZE);
	print_animals(animals, SIZE);
	delete_animals(animals, SIZE);
	
	return (0);
}

void    init_animals(Animal *animals[], int size)
{
	std::cout << COLOR_GREEN << "|-------------CONSTR.-------------|" << COLOR_RESET << std::endl;
    for (int i = 0; i < size; i++)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
}

void    print_animals(Animal *animals[], int size)
{
	std::cout << COLOR_GREEN << "|--------------SOUND--------------|" << COLOR_RESET << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
}

void    delete_animals(Animal *animals[], int size)
{
	std::cout << COLOR_GREEN << "|-------------DESTRU.-------------|" << COLOR_RESET << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];
}