#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
    this->brain = new Brain();
	std::cout << COLOR_YELLOW << "Cat " << COLOR_RESET << "default constructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->brain = new Brain(*other.brain);
	*this = other;
	std::cout << COLOR_YELLOW << "Cat " << COLOR_RESET << "copy constructor" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
	std::cout << COLOR_YELLOW << "Cat " << COLOR_RESET << "destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << COLOR_BRIGHT_YELLOW <<  "Meow Meow" << COLOR_RESET << std::endl;
}
