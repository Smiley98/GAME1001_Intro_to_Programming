#include <iostream>
#include <limits>

int main()
{
	// Its important to know the capacities of our datatypes
	// We can query the minimums and maximums with number_limits.
	unsigned int maxWholeNumber = std::numeric_limits<unsigned int>::max();
	std::cout << maxWholeNumber << std::endl;
	char largestSignedCharacter = std::numeric_limits<char>::max();
	unsigned char largestCharacter = std::numeric_limits<unsigned char>::max();
	std::cout << (int)largestSignedCharacter << std::endl;
	std::cout << (int)largestCharacter << std::endl;
	float largestDecimalNumber = std::numeric_limits<float>::max();
	std::cout << largestDecimalNumber << std::endl;

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

	std::cout << "Please enter any number" << std::endl;
	int number;
	std::cin >> number;
	std::cout << "Initial number: " << number << std::endl;
	std::cout << "Initial number + 2 = " << number + 2 << std::endl;
	std::cout << "Initial number - 2 = " << number - 2 << std::endl;
	std::cout << "Initial number * 2 = " << number * 2 << std::endl;
	std::cout << "Initial number / 2 = " << number / 2 << std::endl;
	// Integers (int) can only be whole numbers.
	// Anytime they are decimals, they get truncated (rounded down).
	// For example, 5 / 2 should be 2.5, but 2.5 rounded down = 2
	// Once again, even if the number is high like 2.75, it becomes 2!
	int number2 = 2.75;
	std::cout << number2 << std::endl;

	// float on the other hand can be used to represent decimals the way we expect!
	float decimalNumber;
	std::cin >> decimalNumber;
	std::cout << "Initial decimal number: " << decimalNumber << std::endl;
	std::cout << "Initial decimal number + 2 = " << decimalNumber + 2.0f << std::endl;
	std::cout << "Initial decimal number - 2 = " << decimalNumber - 2.0f << std::endl;
	std::cout << "Initial decimal number * 2 = " << decimalNumber * 2.0f << std::endl;
	std::cout << "Initial decimal number / 2 = " << decimalNumber / 2.0f << std::endl;

	return 0;
}
