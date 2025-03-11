#pragma once

#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

class Base
{
	public :
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);
