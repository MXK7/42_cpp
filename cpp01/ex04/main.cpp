#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

// void replaceStringInFile(const std::string &filename, const std::string &s1, const std::string &s2)

void return_error(int argc, const std::string &filename, const std::string &s1, const std::string &s2)
{
    if (argc != 4)
        std::cerr << "Usage: " << filename << " <filename> <string1> <string2>\n";
    else if (filename.empty() || s1.empty() || s2.empty())
        std::cerr << "Error: Empty string is not allowed.\n";
    else if (s1 == s2)
        std::cerr << "Error: The strings are the same.\n";
    return;
}

void copy_folder(std::string filename, std::string filenameDest)
{
	std::ifstream src(filename.c_str());
    if (!src.is_open())
        std::cerr << "Error: Unable to open the source file " << filename << std::endl;
    std::ofstream dest(filenameDest.c_str());
    if (!dest.is_open())
        std::cerr << "Error: Unable to open the destination file " << filenameDest << std::endl;
    src.close();
    dest.close();
	return ;
}

int main(int argc, char **argv)
{
    std::string filename = argv[1];
    std::string filenameDest = filename + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    return_error(argc, filename, s1, s2);
	copy_folder(filename, filenameDest);
	// TODO: ADD COPY AND REPLACE STRING 

    return 0;
}
