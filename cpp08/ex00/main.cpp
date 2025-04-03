#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> numbers;
    for (int i = 0; i < 10; ++i)
        numbers.push_back(i * 2);

    try {
        std::vector<int>::iterator found = easyfind(numbers, 13);
        std::cout << "Found: " << *found << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}