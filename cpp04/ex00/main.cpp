#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << COLOR_GREEN << "|-------------CONSTR.-------------|" << COLOR_RESET << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << COLOR_GREEN << "|-------------GET TYPE------------|" << COLOR_RESET << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << COLOR_GREEN << "|--------------SOUND--------------|" << COLOR_RESET << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << COLOR_GREEN << "|-------------DESTRU.-------------|" << COLOR_RESET << std::endl;
	delete meta;
	delete j;
	delete i;

	return (0);
}