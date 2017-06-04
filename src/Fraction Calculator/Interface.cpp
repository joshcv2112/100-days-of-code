#include "Interface.h"
#include <iostream>

Interface::Interface()
{
	std::cout << "Welcome!" << std::endl;
}

int Interface::makeSelection()
{
	int selection;
	std::cout << "Make a selection\n1. Whole numbers\n2.Fractions" << std::endl;
	std::cin >> selection;
	return selection;
}

void Interface::wholeNumbers()
{

}

void Interface::fractions()
{

}
