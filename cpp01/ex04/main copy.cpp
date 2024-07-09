#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void	replaceStringInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
	size_t	pos;

	std::ifstream fileIn(filename.c_str());
	if (!fileIn.is_open())
	{
		throw std::runtime_error("Cannot open the file: " + filename);
	}
	std::stringstream buffer;
	buffer << fileIn.rdbuf();
	std::string content = buffer.str();
	fileIn.close();
	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
		pos += s2.length();
	}
	std::ofstream fileOut((filename + ".replace").c_str());
	if (!fileOut.is_open())
	{
		throw std::runtime_error("Cannot open the file to write: " + filename + ".replace");
	}
	fileOut << content;
	fileOut.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	try
	{
		replaceStringInFile(filename, s1, s2);
		std::cout << "Replacement completed successfully.\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
