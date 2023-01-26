#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Welcome to battle simulator 2023" << endl;
	cout << "Battle commencing..." << endl << endl;

	// Step 1. Input stats
	int playerHealth = 0;
	cout << "Please enter the player's health " << endl;
	cin >> playerHealth;

	int playerDamage = 0;
	cout << "Please enter the player's damage " << endl;
	cin >> playerDamage;

	int monsterHealth = 0;
	cout << "Please enter the monster's health " << endl;
	cin >> monsterHealth;

	int monsterDamage = 0;
	cout << "Please enter the monster's damage " << endl;
	cin >> monsterDamage;

	// Step 2. Run battle
	cout << endl << "The monster ferociously lunges at the player" << endl;
	playerHealth -= monsterDamage;

	return 0;
}

// playerHealth -= monsterDamage; is the exact same as playerHealth = playerHealth - monsterDamage;