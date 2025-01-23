#include "PresidentialPardonForm.hpp"	

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) , _target(NULL)
{
	std::cout << "Default constructor of the PresidentialPardonForm class called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Type constructor of the PresidentialPardonForm class called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :	AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), _target(copy.getTarget())
{
	std::cout << "Copy constructor  of the PresidentialPardonForm class called !" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "Copy assignment operator of the PresidentialPardonForm class called !" << std::endl;
	this->AForm::operator=(other);
	this->_target = other.getTarget();
	return (*this);	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of the PresidentialPardonForm class called !" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw (GradeTooLowException());
	else if (!this->getIsSigned())
		throw (FormNotSignedException());
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
