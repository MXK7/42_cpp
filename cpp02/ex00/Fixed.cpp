#include "Fixed.hpp"

int Fixed::getRawBits(void)
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed &operator=(const Fixed &other)
{
	if (this != &other)
	{ // Protection contre l'auto-affectation
		this->value = other.value;
	}
	return (*this);
}