#include "RobotomyRequestForm.hpp"	

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) , _target(NULL)
{
	srand(time(NULL));
	std::cout << "Default constructor of the RobotomyRequestForm class called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	srand(time(NULL));
	std::cout << "Type constructor of the RobotomyRequestForm class called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :	AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), _target(copy.getTarget())
{
	std::cout << "Copy constructor of the RobotomyRequestForm class called !" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "Copy assignment operator of the RobotomyRequestForm class called !" << std::endl;
	this->AForm::operator=(other);
	this->_target = other.getTarget();
	return (*this);	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of the RobotomyRequestForm class called !" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw (GradeTooLowException());
	else if (!this->getIsSigned())
		throw (FormNotSignedException());

	if (rand() % 2)
		std::cout << "**DRlllrlrllr** " << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "Failed to robotomize " << this->_target << " !" << std::endl;
}
