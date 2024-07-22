#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->raw = value << Fixed::bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->raw = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation \"=\" operator called" << std::endl;
    if (this != &other)
        this->raw = other.raw;
    return *this;
}



bool Fixed::operator>(const Fixed &other) const
{
    std::cout << "Assignation \">\" operator called" << std::endl;
    return this->raw > other.raw;
}

bool Fixed::operator<(const Fixed &other) const
{
    std::cout << "Assignation \"<\" operator called" << std::endl;
    return this->raw < other.raw;
}

bool Fixed::operator>=(const Fixed &other) const
{
    std::cout << "Assignation \">=\" operator called" << std::endl;
    return this->raw >= other.raw;
}

bool Fixed::operator<=(const Fixed &other) const
{
    std::cout << "Assignation \"<=\" operator called" << std::endl;
    return this->raw <= other.raw;
}

bool Fixed::operator==(const Fixed &other) const
{
    std::cout << "Assignation \"==\" operator called" << std::endl;
    return this->raw == other.raw;
}

bool Fixed::operator!=(const Fixed &other) const
{
    std::cout << "Assignation \"!=\" operator called" << std::endl;
    return this->raw != other.raw;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed tmp;

    tmp.raw = this->raw + other.raw;
    std::cout << "Assignation \"+\" operator called" << std::endl;
    return tmp;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed tmp;

    tmp.raw = this->raw - other.raw;
    std::cout << "Assignation \"-\" operator called" << std::endl;
    return tmp;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed tmp;

    tmp.raw = (this->raw * other.raw) >> Fixed::bits;
    std::cout << "Assignation \"*\" operator called" << std::endl;
    return tmp;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed tmp;

    tmp.raw = (this->raw << Fixed::bits) / other.raw;
    std::cout << "Assignation \"/\" operator called" << std::endl;
    return tmp;
}

Fixed &Fixed::operator++(void)
{
    this->raw++;
    std::cout << "Assignation \"++\" operator called" << std::endl;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->raw++;
    std::cout << "Assignation \"++\" operator called" << std::endl;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->raw--;
    std::cout << "Assignation \"--\" operator called" << std::endl;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->raw--;
    std::cout << "Assignation \"--\" operator called" << std::endl;
    return tmp;
}



int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
}



float Fixed::toFloat(void) const
{
    std::cout << "toFloat member function called" << std::endl;
    return this->raw / static_cast<float>(1 << Fixed::bits);
}

int Fixed::toInt(void) const
{
    std::cout << "toInt member function called" << std::endl;
    return this->raw >> Fixed::bits;
}



std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    std::cout << "Assignation \"<<\" operator called" << std::endl;
    os << obj.toFloat();
    return os;
}



const Fixed     &Fixed::min(Fixed &a, Fixed &b)
{
    std::cout << "Assignation \"min\" operator called" << std::endl;
    return a < b ? a : b;
}

const Fixed     &Fixed::min(const Fixed &a, const Fixed &b)
{
    std::cout << "Assignation \"min\" operator called" << std::endl;
    return a < b ? a : b;
}

const Fixed     &Fixed::max(Fixed &a, Fixed &b)
{
    std::cout << "Assignation \"max\" operator called" << std::endl;
    return a > b ? a : b;
}

const Fixed     &Fixed::max(const Fixed &a, const Fixed &b)
{
    std::cout << "Assignation \"max\" operator called" << std::endl;
    return a > b ? a : b;
}