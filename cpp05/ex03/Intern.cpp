#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor of the Intern class called !" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	std::cout << "Copy constructor of the Intern class called !" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Copy assignment operator of the Intern class called !" << std::endl;
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor of the Intern class called !" << std::endl;
}

static AForm *makeShrubberyCF(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *makeRobotomyRF(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makePresidentialPF(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	AForm *(*allForm[])(const std::string &formTarget) = {&makeShrubberyCF, &makeRobotomyRF, &makePresidentialPF};
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (allForm[i](target));
		}
	}

	std::cout << "Intern could not create form named " << formName << std::endl;
	return (NULL);
}
