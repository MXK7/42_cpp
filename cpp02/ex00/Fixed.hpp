#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int raw;                           
	static const int f_bits = 8;

  public:
	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed &operator=(const Fixed &other);

    int	getRawBits(void);
	void setRawBits(int const raw);
};

#endif