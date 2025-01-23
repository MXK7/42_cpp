#include "ShrubberyCreationForm.hpp"	
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) , _target(NULL)
{
	std::cout << "Default constructor of the ShrubberyCreationForm class called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Type constructor of the ShrubberyCreationForm class called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :	AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), _target(copy.getTarget())
{
	std::cout << "Copy constructor  of the ShrubberyCreationForm class called !" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "Copy assignment operator of the ShrubberyCreationForm class called !" << std::endl;
	this->AForm::operator=(other);
	this->_target = other.getTarget();
	return (*this);	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of the ShrubberyCreationForm class called !" << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::string		filename(this->_target + "_shrubbery");
	std::ofstream	outfile;

	if (executor.getGrade() > this->getGradeToExec())
		throw (GradeTooLowException());
	if (!this->getIsSigned())
		throw (FormNotSignedException());

	outfile.open(filename.c_str());

	if (!outfile.is_open())
		std::cerr << "Shrubbery file : " << this->_target << " could not be open..." << std::endl;
	else
	{
		for (int i = 0; i < ATREE_NB ; i++)
			outfile << ASCII_TREE;
		outfile.close();
	}	
}
