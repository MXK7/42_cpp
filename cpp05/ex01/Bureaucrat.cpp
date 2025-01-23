#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

// cannonical form
Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor of the Bureaucrat class called !" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
	std::cout << "Type constructor of the Bureaucrat class called !" << std::endl;
	if (grade < MAX_GRADE)
		throw (GradeTooHighException());
	else if (grade > MIN_GRADE)
		throw (GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	std::cout << "Copy constructor of the Bureaucrat class called !" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "Copy assignment operator of the Bureaucrat class called !" << std::endl;
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor of the Bureaucrat class called !" << std::endl;
}

// method
const std::string	&Bureaucrat::getName() const {
	return (this->_name);
}

const int			&Bureaucrat::getGrade() const {
	return (this->_grade);
}

void				Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < MAX_GRADE)
		throw (GradeTooHighException());
	this->_grade--;
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > MIN_GRADE)
		throw (GradeTooLowException());
	this->_grade++;
}

void				Bureaucrat::signForm(Form &form) {
	if (form.getIsSigned())
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because it's already signed" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because grade is too low" << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high sorry !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low sorry !");
}

// output stream surchage operator
std::ostream &operator<<(std::ostream &flux, const Bureaucrat &other) {
	flux << other.getName() << ", bureaucrat grade " << other.getGrade();
	return flux;
}
