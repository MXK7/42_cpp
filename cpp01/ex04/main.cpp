#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static bool return_error(int argc, const std::string &filename, const std::string &s1, const std::string &s2);
static void copy_folder(std::string filename, std::string filenameDest, std::string s1, std::string s2, bool error);

int main(int argc, char **argv)
{
    bool error = false;

    std::string filename = argv[1] == NULL ? "" : argv[1];
    std::string filenameDest = filename.empty() ? "" : (filename + ".replace");
    std::string s1 = argv[2] == NULL ? "" : argv[2];
    std::string s2 = argv[3] == NULL ? "" : argv[3];

    error = return_error(argc, filename, s1, s2);
	copy_folder(filename, filenameDest, s1, s2, error);

    return (0);
}



static bool return_error(int argc, const std::string &filename, const std::string &s1, const std::string &s2)
{
    // TODO: DELETE:
    // std::cout << "filename: " << filename << std::endl;
    // std::cout << "s1: " << s1 << std::endl;
    // std::cout << "s2: " << s2 << std::endl;
    if (filename == "NULL" || s1 == "NULL" || s2 == "NULL")
        std::cerr << "Error: Empty string is not allowed.\n";
    else if (argc != 4)
        std::cerr << "Usage: " << filename << " <filename> <string1> <string2>\n";
    else if (filename.empty() || s1.empty() || s2.empty())
        std::cerr << "Error: Empty string is not allowed.\n";
    else if (s1 == s2)
        std::cerr << "Error: The strings are the same.\n";
    else
        return (true);
    return (false);
}

static void copy_folder(std::string filename, std::string filenameDest, std::string s1, std::string s2, bool error)
{
    if (error)
    {
        std::ifstream src(filename.c_str());
        if (!src.is_open())
            std::cerr << "Error: Unable to open the source file " << filename << std::endl;
        std::ofstream dest(filenameDest.c_str());
        if (!dest.is_open())
            std::cerr << "Error: Unable to open the destination file " << filenameDest << std::endl;
        std::string line;
        while (std::getline(src, line))
        {
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
            dest << line << std::endl;
        }
        src.close();
        dest.close();
    }
	return ;
}
