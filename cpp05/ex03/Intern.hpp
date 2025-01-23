#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(Intern const &copy);
		Intern &operator=(const Intern &other);
		~Intern();

		AForm *makeForm(const std::string &formName, const std::string &target) const;
};
