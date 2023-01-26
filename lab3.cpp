#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to battle simulator 2023" << endl
	     << "Preparing Player for battle..." << endl << endl;

	int playerHealth = 0;
	cout << "Please enter the player's health: " << endl;
	cin >> playerHealth;

	int playerDamage = 0;
	cout << "Please enter the player's damage: " << endl << endl;
	cin >> playerDamage;

	int monsterHealth = 0;
	cout << "Please enter the monster's health: " << endl;
	cin >> monsterHealth;

	int monsterDamage = 0;
	cout << "Please enter the monster's damage: " << endl << endl;
	cin >> monsterDamage;

	return 0;
}

// We don't want to use single letters for variable names,
// we want to make our variable names as informative as possible!
// a = muffin price
// b = number of muffins sold
// c = revenue of muffins
//double a = 0.0;
//double b = 0.0;
//double c = a * b;

// This is the most informative way to declare variables, "camelCase"
// Each capital letter is a "hump on the camel's back" xD xD xD
//double muffinPrice = 5.0;
//double muffinsSold = 100.0;
//double muffinRevenue = muffinPrice * muffinsSold;


// We can get creative with cout to make programmer art
//std::cout << "##########################" << std::endl;
//std::cout << "#                        #" << std::endl << std::endl;
//std::cout << "#                        #" << std::endl;
//std::cout << "#                        #" << std::endl << std::endl;
//std::cout << "#          $             #" << std::endl;
//std::cout << "#                        #" << std::endl << std::endl;
//std::cout << "#                        #" << std::endl;
//std::cout << "#                        #" << std::endl << std::endl;
//std::cout << "#                        #" << std::endl;
//std::cout << "##########################" << std::endl;

// Just like cout, we can also insert multiple cin's into the stream!
//double number1, number2, number3;
//std::cin >> number1 >> number2 >> number3;
//std::cout << number1 << number2 << number3;
