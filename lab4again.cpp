///*
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to battle simulator 2023" << endl
		 << "Preparing Player for battle..." << endl;

	// Input player health
	int playerHealth = 0;
	cout << endl << "Please enter the player's health: " << endl;
	cin >> playerHealth;

	// Input player damage
	int playerDamage = 0;
	cout << "Please enter the player's damage: " << endl;
	cin >> playerDamage;

	// Input monster health
	int monsterHealth = 0;
	cout << endl << "Please enter the monster's health: " << endl;
	cin >> monsterHealth;

	// Input monster damage
	int monsterDamage = 0;
	cout << "Please enter the monster's damage: " << endl;
	cin >> monsterDamage;

	// While at least one fighter is alive, keep fighting
	while (playerHealth > 0 && monsterHealth > 0)
	{
		// Monster attacks player
		cout << endl << "The monster fearsomely lunges at the player!" << endl;
		playerHealth -= monsterDamage;
		cout << "The player took " << monsterDamage << " damage." << endl
			<< "Player health: " << playerHealth << "." << endl << endl;

		// Player attacks monster
		cout << "The player fights back in retaliation!" << endl;
		monsterHealth -= playerDamage;
		cout << "The monster took " << playerDamage << " damage." << endl
			<< "Monster health: " << monsterHealth << "." << endl;
	}

	if (playerHealth <= 0 && monsterHealth <= 0)
		cout << "Both parties lost the fight" << endl;
	else if (monsterHealth <= 0)
		cout << "Player won the fight!" << endl;
	else
		cout << "Monster won the fight!" << endl;

	return 0;
}//*/