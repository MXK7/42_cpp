#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExec);
		Form(const Form &copy);
		Form &operator=(const Form &other);
		~Form();

		const std::string	&getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				getIsSigned() const;

		void				beSigned(Bureaucrat const &other);

		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream &operator<<(std::ostream &flux, Form const &other);
