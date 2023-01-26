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
	cout << "The player took " << monsterDamage << " damage." << endl;

	cout << "The player fights back with aggression" << endl;
	monsterHealth -= playerDamage;
	cout << "The monster took " << playerDamage << " damage." << endl;

	// Step 3. Determine the outcome
	if (playerHealth <= 0 || monsterHealth <= 0)
	{
		if (playerHealth <= 0 && monsterHealth <= 0)
			cout << "Both parties won, but they paid with their lives..." << endl;
		else if (playerHealth > monsterHealth)
			cout << "Player wins!" << endl;
		else
			cout << "Monster wins!" << endl;
	}
	else
	{
		cout << "Both parties are still standing... Its a draw!" << endl;
	}

	return 0;
}