#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int                 raw;
    const static int bits = 8;
    public:
        Fixed(void);
        Fixed(int const comma);
        Fixed(float const comma);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed   &operator=(const Fixed &other);
        bool    operator>(const Fixed &other) const;
        bool    operator<(const Fixed &other) const;
        bool    operator>=(const Fixed &other) const;
        bool    operator<=(const Fixed &other) const;
        bool    operator==(const Fixed &other) const;
        bool    operator!=(const Fixed &other) const;
        Fixed   operator+(const Fixed &other) const;
        Fixed   operator-(const Fixed &other) const;
        Fixed   operator*(const Fixed &other) const;    
        Fixed   operator/(const Fixed &other) const;
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        static const Fixed  &min(Fixed &a, Fixed &b);
        static const Fixed  &min(const Fixed &a, const Fixed &b);
        static const Fixed  &max(Fixed &a, Fixed &b);
        static const Fixed  &max(const Fixed &a, const Fixed &b);
};

std::ostream    &operator<<(std::ostream &os, const Fixed &obj);

#endif