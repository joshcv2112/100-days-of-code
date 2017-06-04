#include "Interface.h"
#include <iostream>

Interface::Interface()
{
	std::cout << "Welcome!" << std::endl;
}

int Interface::makeSelection()
{
	int selection;
	std::cout << "Make a selection\n1. Whole numbers\n2. Fractions" << std::endl;
	std::cin >> selection;

	// Validates input to be an int that is either 1 or 2.
	// Repeats if input is invalid.
	while (std::cin.fail() || (selection < 1 || selection > 2))
	{
		std::cout << "Invalid input. Try again . . ." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> selection;
	}

	return selection;
}

void Interface::wholeNumbers()
{

}

void Interface::fractions()
{

}
