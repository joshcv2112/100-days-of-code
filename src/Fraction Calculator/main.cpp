#include "Interface.h"
#include <iostream>

int main()
{
	int selection = Interface::makeSelection();
	
	if (selection == 1)
		Interface::wholeNumbers();

	return 0;
}