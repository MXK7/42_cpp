#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExec);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		const std::string	&getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

		void				beSigned(const Bureaucrat &other);
		virtual void		execute(const Bureaucrat &executor) const = 0;


		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		int	const			_gradeToSign;
		int	const			_gradeToExec;
};

std::ostream &operator<<(std::ostream &flux, const AForm &other);
