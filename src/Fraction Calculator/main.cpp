#include "Interface.h"
#include <iostream>

int main()
{
	bool repeat = true;
	while (repeat)
	{
		int selection = Interface::makeSelection();
		if (selection == 1)
		{
			Interface::wholeNumbers();
		}
		else if (selection == 2)
		{
			Interface::fractions();
		}
		else
			std::cout << "Invalid selection, try again . . ." << std::endl;
	}
	
	std::cout << "Terminating program . . ." << std::endl;

	return 0;
}