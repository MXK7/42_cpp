#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define COLOR_RESET "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_CYAN "\033[36m"
# define COLOR_WHITE "\033[37m"
# define COLOR_BLACK "\033[30m"
# define COLOR_BRIGHT_BLACK "\033[90m"
# define COLOR_BRIGHT_RED "\033[91m"
# define COLOR_BRIGHT_GREEN "\033[92m"
# define COLOR_BRIGHT_YELLOW "\033[93m"
# define COLOR_BRIGHT_BLUE "\033[94m"
# define COLOR_BRIGHT_MAGENTA "\033[95m"
# define COLOR_BRIGHT_CYAN "\033[96m"
# define COLOR_BRIGHT_WHITE "\033[97m"

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
  private:
	std::string name;
	int grade;

  public:
	// FUNCTION BASE
	Bureaucrat(std::string name, int note);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &other);

	// GETTERS
    std::string getName() const { return name; }
    int getGrade() const { return grade; }

	void SetGrade(int grade);

	// INCREMENT
	void incrementGrade();
	void decrementGrade();

	// FUNCTIONS EXCEPTION
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			static std::string errorMsg = "Error: you have exceeded the "
				+ std::string(COLOR_YELLOW) + "maximum"
				+ std::string(COLOR_RESET) + " score.";
			return (errorMsg.c_str());
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			static std::string errorMsg = "Error: you have exceeded the "
				+ std::string(COLOR_RED) + "minimum" + std::string(COLOR_RESET)
				+ " score.";
			return (errorMsg.c_str());
		}
	};

	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif