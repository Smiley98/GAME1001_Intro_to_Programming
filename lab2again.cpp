#include <iostream>

int main()
{
	double number1 = 0.0;
	double number2 = 0.0;
	double number3 = 0.0;

	std::cout << "Please enter 3 numbers." << std::endl;

	std::cout << "Number 1:" << std::endl;
	std::cin >> number1;
	std::cout << "You entered " << number1 << " for number 1." << std::endl << std::endl;
	
	std::cout << "Number 2:" << std::endl;
	std::cin >> number2;
	std::cout << "You entered " << number2 << " for number 2." << std::endl << std::endl;
	
	std::cout << "Number 3:" << std::endl;
	std::cin >> number3;
	std::cout << "You entered " << number3 << " for number 3." << std::endl << std::endl;

	// You can input and output multiple values at a time via << and >>
	//std::cin >> number1 >> number2 >> number3;
	//std::cout
	//	<< "Number 1: " << number1 << std::endl
	//	<< "Number 2: " << number2 << std::endl
	//	<< "Number 3: " << number3 << std::endl;

	double sum = 0.0;
	double product = 0.0;
	double average = 0.0;

	sum = number1 + number2 + number3;
	product = number1 * number2 * number3;
	average = sum / 3.0;

	return 0;
}
