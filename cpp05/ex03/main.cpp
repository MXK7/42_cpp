#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try
    {
        // Create an intern
        Intern intern;
        std::cout << "Intern created.\n";

        // Bureaucrat to sign and execute forms
        Bureaucrat boss("Boss", 1);
        std::cout << boss << "\n";

        // Create some forms using the intern
        AForm *shrubbery = intern.makeForm("shrubbery creation", "Garden");
        if (shrubbery)
        {
            std::cout << *shrubbery << "\n";
            boss.signForm(*shrubbery);
            boss.executeForm(*shrubbery);
            delete shrubbery;
        }

        AForm *robotomy = intern.makeForm("robotomy request", "Bender");
        if (robotomy)
        {
            std::cout << *robotomy << "\n";
            boss.signForm(*robotomy);
            boss.executeForm(*robotomy);
            delete robotomy;
        }

        AForm *pardon = intern.makeForm("presidential pardon", "Fry");
        if (pardon)
        {
            std::cout << *pardon << "\n";
            boss.signForm(*pardon);
            boss.executeForm(*pardon);
            delete pardon;
        }

        // Attempt to create an unknown form
        AForm *unknown = intern.makeForm("unknown form", "Target");
        if (!unknown)
        {
            std::cout << "The intern couldn't create the requested form.\n";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}

