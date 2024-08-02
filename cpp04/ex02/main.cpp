#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << COLOR_GREEN << "|-------------CONSTR.-------------|" << COLOR_RESET << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << COLOR_GREEN << "|-------------GET TYPE------------|" << COLOR_RESET << std::endl;
	std::cout << COLOR_MAGENTA << cat->getType() << " " << COLOR_RESET << std::endl;
	std::cout << COLOR_YELLOW << dog->getType() << " " << COLOR_RESET << std::endl;

	std::cout << COLOR_GREEN << "|--------------SOUND--------------|" << COLOR_RESET << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << COLOR_GREEN << "|-------------DESTRU.-------------|" << COLOR_RESET << std::endl;
	delete dog;
	delete cat;

	return (0);
}