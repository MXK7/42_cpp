
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        std::cout << "=== Testing ShrubberyCreationForm ===" << std::endl;
        Bureaucrat bob("Bob", 140);
        ShrubberyCreationForm shrubForm("Garden");

        std::cout << bob << std::endl;
        std::cout << shrubForm << std::endl;

        bob.signForm(shrubForm);
        bob.executeForm(shrubForm);

        Bureaucrat alice("Alice", 130);
        alice.executeForm(shrubForm);

        std::cout << "\n=== Testing RobotomyRequestForm ===" << std::endl;
        Bureaucrat john("John", 50);
        RobotomyRequestForm roboForm("Target");

        std::cout << john << std::endl;
        std::cout << roboForm << std::endl;

        john.signForm(roboForm);
        john.executeForm(roboForm);

        std::cout << "\n=== Testing PresidentialPardonForm ===" << std::endl;
        Bureaucrat president("President", 1);
        PresidentialPardonForm pardonForm("Prisoner");

        std::cout << president << std::endl;
        std::cout << pardonForm << std::endl;

        president.signForm(pardonForm);
        president.executeForm(pardonForm);

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Testing Exceptions ===" << std::endl;
        Bureaucrat lowRank("Low Rank", 150);
        ShrubberyCreationForm lowForm("Low Garden");

        std::cout << lowRank << std::endl;
        std::cout << lowForm << std::endl;

        lowRank.signForm(lowForm);
        lowRank.executeForm(lowForm);

        Bureaucrat niceRank("nice Rank", 15);
		niceRank.signForm(lowForm);
		niceRank.executeForm(lowForm);

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

