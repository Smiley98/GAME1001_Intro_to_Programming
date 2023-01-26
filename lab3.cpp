#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to battle simulator 2023" << endl
	     << "Preparing Player for battle..." << endl << endl;

	// Input player health
	int playerHealth = 0;
	cout << "Please enter the player's health: " << endl;
	cin >> playerHealth;

	// Input player damage
	int playerDamage = 0;
	cout << "Please enter the player's damage: " << endl << endl;
	cin >> playerDamage;

	// Input monster health
	int monsterHealth = 0;
	cout << "Please enter the monster's health: " << endl;
	cin >> monsterHealth;

	// Input monster damage
	int monsterDamage = 0;
	cout << "Please enter the monster's damage: " << endl << endl;
	cin >> monsterDamage;

	// Monster attacks player
	cout << "The monster fearsomely lunges at the player!" << endl;
	playerHealth -= monsterDamage;
	cout << "The player took " << monsterDamage << " damage." << endl
		 << "Player health: " << playerHealth << "." << endl << endl;

	// Player attacks monster
	cout << "The player fights back in retaliation!" << endl;
	monsterHealth -= playerDamage;
	cout << "The monster took " << playerDamage << " damage." << endl
		<< "Monster health: " << monsterHealth << "." << endl;

	return 0;
}

// TOO MUCH COMMENTING:
//int playerHealth = 0;									// declare player health variable
//cout << "Please enter the player's health: " << endl; // prompt user to enter player's health
//cin >> playerHealth;									// receive user player's health input

// "-=" is the exact same as a = a - b.
//playerHealth = playerHealth - monsterDamage;

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
