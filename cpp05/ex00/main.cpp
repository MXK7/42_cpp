#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Vérification des exceptions pour un grade trop élevé
		Bureaucrat jimmy("Jimmy", 0); // Devrait lever une exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Vérification des exceptions pour un grade trop bas
		Bureaucrat jimmy("Jimmy", 151); // Devrait lever une exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Initialisation des bureaucrates avec des grades valides
	try
	{
		Bureaucrat marcelus("Marcelus", 1);
		Bureaucrat john("John", 75);
		Bureaucrat bob("Bob", 150);

		std::cout << marcelus << std::endl;
		std::cout << john << std::endl;
		std::cout << bob << std::endl;
		std::cout << std::endl;

		// Tentative d'incrémentation qui devrait lever une exception
		try
		{
			marcelus.incrementGrade(); // Grade déjà au maximum
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}

		// Incrémentation d'un grade valide
		try
		{
			john.incrementGrade(); // Devrait réussir
			std::cout << john << std::endl; // Affichage après incrémentation
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}

		// Décrémentation qui devrait lever une exception
		try
		{
			bob.decrementGrade(); // Grade déjà au minimum
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << marcelus << std::endl;
		std::cout << john << std::endl;
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Unexpected exception caught: " << e.what() << std::endl;
	}

	return (0);
}
