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
	// Be sure to validate input at some point.
	double x1, x2;
	char operation;

	std::cout << "First number: ";
	std::cin >> x1;
	while (std::cin.fail())
	{
		std::cout << "Invalid input, try again.\nFirst number: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> x1;
	}
	
	do {
		std::cout << "Operation: ";
		std::cin.ignore();
		std::cin >> operation;
	} while (operation != '+' && 
			 operation != '-' && 
		     operation != '*' &&
		     operation != '/');

	std::cout << "Second number: ";
	std::cin >> x2;
	while (std::cin.fail())
	{
		std::cout << "Invalid input, try again.\nSecond Number: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> x2;
	}

	double answer = calculate(x1, x2, operation);
	std::cout << x1 << " " << operation << " " << x2 << " = " << answer << std::endl;
}

double Interface::calculate(double x1, double x2, char op)
{
	return 1.0;
}

void Interface::fractions()
{

}
