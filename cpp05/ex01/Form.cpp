#include "Form.hpp"

Form::Form() : _name("default"), _isSigned(false), _gradeToSign(MAX_GRADE), _gradeToExec(MAX_GRADE) {
	std::cout << "Default constructor of the Form class called !" << std::endl;
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "Type constructor of the Form class called !" << std::endl;

	if (gradeToSign < MAX_GRADE)
		throw (GradeTooHighException());
	else if (gradeToSign > MIN_GRADE)
		throw (GradeTooLowException());

	if (gradeToExec < MAX_GRADE)
		throw (GradeTooHighException());
	else if (gradeToExec > MIN_GRADE)
		throw (GradeTooLowException());
}

Form::Form(Form const &copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	std::cout << "Copy constructor of the Form class called !" << std::endl;
}

Form &Form::operator=(Form const &other) {
	std::cout << "Copy assignment operator of the Form class called !" << std::endl;
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

Form::~Form() {
	std::cout << "Destructor of the Form class called !" << std::endl;
}

//method
const std::string	&Form::getName() const {
	return (this->_name);
}

bool Form::getIsSigned() const {
	return (this->_isSigned);
}

int	Form::getGradeToSign() const {
	return (this->_gradeToExec);
}

int	Form::getGradeToExec() const {
	return (this->_gradeToSign);
}

void Form::beSigned(Bureaucrat const &other) {
	if (other.getGrade() > this->_gradeToSign)
		throw (GradeTooLowException());
	this->_isSigned = true;
}

// exception
const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade too high sorry !");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too low sorry !");
}

// output surcharge operator
std::ostream &operator<<(std::ostream &flux, Form const &other) {
	flux << other.getName() << ", grade to sign : " << other.getGradeToSign() << ", grade to execute : " << other.getGradeToExec() << ". Form ";

	other.getIsSigned() ? (flux << "is signed.") : (flux << "isn't signed.");
	// if (other.getIsSigned())
	// 	flux << "is signed.";
	// else
	//  	flux << "isn't signed.";
	return flux;
}
