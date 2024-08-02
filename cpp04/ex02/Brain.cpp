#include "Brain.hpp"

Brain::Brain()
{
    std::cout << COLOR_CYAN << "Brain " << COLOR_RESET << "default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << COLOR_CYAN << "Brain " << COLOR_RESET << "copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << COLOR_CYAN << "Brain " << COLOR_RESET << "assignation operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << COLOR_CYAN << "Brain " << COLOR_RESET << "destructor called" << std::endl;
}
