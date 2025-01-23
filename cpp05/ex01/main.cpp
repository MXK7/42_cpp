#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        std::cout << "=== Testing Form Creation ===" << std::endl;
        Form taxForm("Tax Form", 50, 25);
        std::cout << taxForm << std::endl;

        Form invalidHigh("Invalid High", 0, 50);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Form invalidLow("Invalid Low", 151, 25);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Testing Bureaucrat and Form Interaction ===" << std::endl;
        Bureaucrat bob("Bob", 60);
        Form taxForm("Tax Form", 50, 25);

        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        bob.signForm(taxForm);
        std::cout << taxForm << std::endl;

        Bureaucrat alice("Alice", 40);
        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Testing Exception Handling ===" << std::endl;
        Bureaucrat john("John", 1);
        Form restrictedForm("Restricted Form", 1, 1);

        std::cout << john << std::endl;
        std::cout << restrictedForm << std::endl;

        john.signForm(restrictedForm);
        std::cout << restrictedForm << std::endl;

        Bureaucrat lowLevel("Low Level", 150);
        lowLevel.signForm(restrictedForm);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

