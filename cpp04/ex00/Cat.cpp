#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
