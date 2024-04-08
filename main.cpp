# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

int main(void)
{
    std::stringstream ss;
    int x = 100;
    double y = 200.12;
    ss << x << " - " << y;
    // std::string result = ss.str();
    std::cout << std::endl << ss.str() << std::endl;
    return (0);
}