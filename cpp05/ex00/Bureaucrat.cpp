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

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return (*this);
}

int Bureaucrat::GetGrade()
{
	return (*this->grade);
}

const std::string &Bureaucrat::GetName() const
{
	return (this->name);
}

void Bureaucrat::SetGrade(int grade)
{
	if (grade < 150)
	{
		std::cout << "Error: You have exceeded the maximum size." << std::endl;
		return ;
	}
}

void Bureaucrat::incrementGrade()
{
	if (*this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	(*this->grade)--;
}

void Bureaucrat::decrementGrade()
{
	if (*this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	(*this->grade)++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.GetName() << ", bureaucrat grade " << bureaucrat.GetGrade() << std::endl;
	return (out);
}