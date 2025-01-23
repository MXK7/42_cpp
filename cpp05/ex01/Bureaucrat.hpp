#pragma once

#include <exception>
#include <ostream>
#include <string>
#include "Form.hpp"

#define MAX_GRADE	1
#define MIN_GRADE	150

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		const std::string	&getName() const;
		const int		 	&getGrade() const;

		void			 	incrementGrade();
		void			 	decrementGrade();

		void				signForm(Form &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string _name;
		int				  _grade;
};

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &other);
