#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << name << " Bureaucrat constructor" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	*this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

int Bureaucrat::GetGrade()
{
    return (*this->grade);
}

const std::string &Bureaucrat::GetName() const
{
    return (this->name);
}