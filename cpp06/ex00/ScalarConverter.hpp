#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cerrno>

class ScalarConverter
{
	private :
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);

		ScalarConverter &operator=(ScalarConverter const &other);

	public :
		~ScalarConverter();

		static void convert(std::string const &number);
};
