#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}