#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    this->brain = new Brain();
    std::cout << COLOR_MAGENTA << "Dog " << COLOR_RESET << "default constructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
    this->brain = new Brain(*other.brain);
    *this = other;
    std::cout << COLOR_MAGENTA << "Dog " << COLOR_RESET << "copy constructor" << std::endl;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << COLOR_MAGENTA << "Dog " << COLOR_RESET << "destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->brain = new Brain(*other.brain);
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << COLOR_BRIGHT_MAGENTA << "Woof Woof" << COLOR_RESET << std::endl;
}