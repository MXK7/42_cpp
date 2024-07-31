#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    type = other.type;
    std::cout << "WrongAnimal assignation operator" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
    return (type);
}