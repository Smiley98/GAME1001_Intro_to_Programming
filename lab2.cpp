#include <iostream>

int main()
{
	double number1 = 0.0;
	double number2 = 0.0;
	double number3 = 0.0;

	std::cout << "Please enter 3 numbers." << std::endl;

	std::cout << "Number 1:" << std::endl;
	std::cin >> number1;
	std::cout << "You entered: " << number1 << " for number 1." << std::endl << std::endl;

	std::cout << "Number 2:" << std::endl;
	std::cin >> number2;
	std::cout << "You entered: " << number2 << " for number 2." << std::endl << std::endl;

	std::cout << "Number 3:" << std::endl;
	std::cin >> number3;
	std::cout << "You entered: " << number3 << " for number 3." << std::endl << std::endl;

	double sum = number1 + number2 + number3;
	double average = sum / 3.0;
	double product = number1 * number2 * number3;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << average << std::endl;
	std::cout << "Product: " << product << std::endl;

	return 0;
}
