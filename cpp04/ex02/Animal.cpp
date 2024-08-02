#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << COLOR_BLACK << "Animal " << COLOR_RESET << "default constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << COLOR_BLACK << "Animal " << COLOR_RESET << "copy constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << COLOR_BLACK << "Animal " << COLOR_RESET << "destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

const std::string &Animal::getType(void) const
{
   return this->type;
}

void Animal::makeSound() const
{
    std::cout << COLOR_BLACK << "Animal " << COLOR_RESET << "sound" << std::endl;
}