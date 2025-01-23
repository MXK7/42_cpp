#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(GRADE_MAX), _gradeToExec(GRADE_MAX)
{
	std::cout << "Default constructor of the AForm class called !" << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExec) :	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "Type constructor of the AForm class called !" << std::endl;

	if (gradeToSign < GRADE_MAX)
		throw (GradeTooHighException());
	else if (gradeToSign > GRADE_MIN)
		throw (GradeTooLowException());

	if (gradeToExec < GRADE_MAX)
		throw (GradeTooHighException());
	else if (gradeToExec > GRADE_MIN)
		throw (GradeTooLowException());
}

AForm::AForm(const AForm &copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	std::cout << "Copy constructor of the AForm class called !" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "Copy assignment operator of the AForm class called !" << std::endl;
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor of the AForm class called !" << std::endl;
}

const std::string &AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToExec);
}

int	AForm::getGradeToExec() const
{
	return (this->_gradeToSign);
}

void AForm::beSigned(const Bureaucrat &other)
{
	if (other.getGrade() > this->_gradeToSign)
		throw (GradeTooLowException());
	this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high sorry !");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low sorry !");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("The form is not signed sorry !");
}

std::ostream &operator<<(std::ostream &flux, const AForm &other)
{
	flux << other.getName() << ", grade to sign : " << other.getGradeToSign() << ", grade to execute : " << other.getGradeToExec() << ". AForm ";
	if (other.getIsSigned())
		flux << "is signed.";
	else
	 	flux << "isn't signed.";
	return flux;
}
