#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);

        std::cout << "Searching for 20 in vector: ";
        std::cout << *easyfind(vec, 20) << std::endl;

        std::cout << "Searching for 40 in vector: ";
        std::cout << *easyfind(vec, 40) << std::endl; // devrait lancer une exception
    }
    catch (const std::exception& e) {
        std::cerr << "Vector error: " << e.what() << std::endl;
    }

    try {
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(15);
        lst.push_back(25);

        std::cout << "Searching for 15 in list: ";
        std::cout << *easyfind(lst, 15) << std::endl;

        std::cout << "Searching for 50 in list: ";
        std::cout << *easyfind(lst, 50) << std::endl; // devrait lancer une exception
    }
    catch (const std::exception& e) {
        std::cerr << "List error: " << e.what() << std::endl;
    }

    return 0;
}