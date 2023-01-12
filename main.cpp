#include <iostream>

int main()
{
	std::cout << "Please enter any character" << std::endl;
	char character;
	std::cin >> character;
	std::cout << "Initial character: " << character << std::endl;
	// We can perform math operations to primitive (blue) datatypes
	// using add (+), subtract (-), multiple (*) and divide (/).
	// In this case, we change our character in correspondence with the ASCII table.
	// https://www.asciitable.com/
	character = character + 1;
	std::cout << "Final character: " << character << std::endl;
	return 0;
}
