#pragma once

#include "AForm.hpp"

#define ATREE_NB 1
#define ASCII_TREE \
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"\
"⠀⠀⠀⠀⢀⣀⠄⠠⠐⠐⠈⠀⠁⠒⠋⠁⠁⠁⠁⠁⠈⠈⠈⠀⢁⣁⡩⠇⠀⠀⠀⠀⠀⠀⠀⠀\n"\
"⠀⠀⢀⣀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠁⠁⠂⠄⡀⡀⠀⠀⠀⠀⠀⠀\n"\
"⢐⠋⠁⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠑⢤⠀⠀⠀\n"\
"⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠒⠚⠄⡀⠀\n"\
"⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢣\n"\
"⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸\n"\
"⠀⠈⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⣤⠤⠼\n"\
"⢰⠊⠁⠀⠀⠀⠀⠀⡠⡻⣁⣁⣀⣀⠤⠤⠤⠒⠒⠒⠒⠒⠒⠒⠒⠒⢲⢀⠀⠀⠀⠀⠀⠀⠃⡀\n"\
"⠀⣇⠀⠀⢀⡀⡤⠊⠀⠇⠀⠀⠀⠀⢀⣤⡄⠀⠀⠀⠀⣤⡄⠀⠀⠀⢸⠀⠣⡀⠀⠀⠀⠀⠀⠡\n"\
"⠀⠈⠉⠉⠁⠀⠀⠀⢠⠁⠀⠀⠀⢠⢻⡿⡟⠀⠀⠀⢸⣿⣿⠀⠀⠀⢸⠀⠀⠣⠄⠤⠤⠄⠂⠚\n"\
"⠀⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⠀⠀⠈⠉⠉⢁⢠⠀⠀⠑⠚⠋⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"\
"⠀⠀⠀⠀⠀⠀⠀⢀⠆⠀⠀⠀⠀⠀⠀⠀⠀⠙⠷⠦⠤⠶⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"\
"⠀⠀⠀⠀⠀⠀⠀⠘⠒⠂⠒⠒⠂⠒⠤⠤⠤⢄⣀⣀⡀⠀⠀⠀⠀⠀⠘⡄⠀⠀⠀⠀⠀⠀⠀⠀\n"\
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠒⠒⠲⠤⠇⠀⠀⠀⠀⠀⠀⠀⠀\n"

class ShrubberyCreationForm : public AForm
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();

		virtual void		execute(const Bureaucrat &executor) const;
		const std::string	&getTarget() const;
		

	private :
		std::string	_target;
};
