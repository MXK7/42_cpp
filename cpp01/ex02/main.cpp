#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "str mem address: " << &str << std::endl;
	std::cout << "stringPTR mem address: " << strPTR << std::endl;
	std::cout << "strREF mem address: " << &strREF << std::endl;

	std::cout << "str value: " << str << std::endl;
	std::cout << "strPTR value: " << *strPTR << std::endl;
	std::cout << "strREF value: " << strREF << std::endl;
}
