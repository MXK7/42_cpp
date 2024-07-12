#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int raw;                           
    const static int    bits = 8;
  public:
	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed &operator=(const Fixed &other);

    int	getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif