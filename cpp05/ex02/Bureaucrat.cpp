#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "Default constructor of the Bureaucrat class called !" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	std::cout << "Type constructor of the Bureaucrat class called !" << std::endl;
	if (grade < GRADE_MAX)
		throw (GradeTooHighException());
	else if (grade > GRADE_MIN)
		throw (GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Copy constructor of the Bureaucrat class called !" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator of the Bureaucrat class called !" << std::endl;
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of the Bureaucrat class called !" << std::endl;
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

const int &Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < GRADE_MAX)
		throw (GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > GRADE_MIN)
		throw (GradeTooLowException());
	this->_grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
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

void	Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		std::cout << this->_name << " try to execute " << form.getName() << std::endl;
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High !!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low !!");
}

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &other)
{
	flux << other.getName() << ", bureaucrat grade " << other.getGrade();
	return flux;
}
