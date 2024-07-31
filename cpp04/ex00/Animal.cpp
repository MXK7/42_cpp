#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
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
    std::cout << "Animal sound" << std::endl;
}