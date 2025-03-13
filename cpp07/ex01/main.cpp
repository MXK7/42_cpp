#include "iter.hpp"

int main()
{
	int			intArr[] = {4, 2, 2, 1};
	std::string const strArr[] = {"Comment", "ca", "mon", "reuf", "?", "pilou", "?!!"};

	iter(intArr, 4, print);
	std::cout << std::endl;
	iter(strArr, 7, printc);
	std::cout << std::endl;
}
