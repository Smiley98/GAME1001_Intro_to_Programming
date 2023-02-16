///*
#include <iostream>

double EnterNumber()
{
	static int count = 1;
	double number = 0.0;

	std::cout << "Number " << count << ":" << std::endl;
	std::cin >> number;
	std::cout << "You entered: " << number << " for number " << count << std::endl << std::endl;
	
	count++;
	return number;
}

int main()
{
	std::cout << "Please enter 3 numbers." << std::endl;
	double number1 = EnterNumber();
	double number2 = EnterNumber();
	double number3 = EnterNumber();

	double sum = number1 + number2 + number3;
	double average = sum / 3.0;
	double product = number1 * number2 * number3;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << average << std::endl;
	std::cout << "Product: " << product << std::endl;

	return 0;
}
//*/
