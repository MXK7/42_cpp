#ifndef M_COLOR_HPP
# define M_COLOR_HPP

# include <string>

class m_Color
{
  private:
  public:
	const std::string M_RESET = "\033[0m";
	const std::string M_RED = "\033[31m";
	const std::string M_GREEN = "\033[32m";
	const std::string M_YELLOW = "\033[33m";
	const std::string M_BLUE = "\033[34m";
	const std::string M_MAGENTA = "\033[35m";
	const std::string M_CYAN = "\033[36m";
	const std::string M_WHITE = "\033[37m";
};

#endif