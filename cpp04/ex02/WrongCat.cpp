#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    type = other.type;
    std::cout << "WrongCat assignation operator" << std::endl;
    return (*this);
}
