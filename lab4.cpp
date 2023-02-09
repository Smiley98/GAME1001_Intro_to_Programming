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

	int turnCount = 0;
	cout << endl << "Please enter the number of turns: " << endl;
	cin >> turnCount;

	const int playerMaxHealth = playerHealth;
	const int monsterMaxHealth = monsterHealth;

	cout << "Calculating battle simulation..." << endl;
	for (int turn = 0; turn < turnCount; turn++)
	{
		playerHealth -= monsterDamage;
		monsterHealth -= playerDamage;
	}

	// Test if there were enough turns for either the player or the monster to emerge victious!
	bool runBattle = playerHealth <= 0 || monsterHealth <= 0;
	if (!runBattle)
	{
		cout << "Not enough turns. Terminating program" << endl;
		return 0;
	}
	else
	{
		playerHealth = playerMaxHealth;
		monsterHealth = monsterMaxHealth;
		cout << "PREPARE FOR BATTLE!!!" << endl;
	}

	for (int turn = 0; turn < turnCount; turn++)
	{
		// Monster attacks player
		cout << endl << "The monster fearsomely lunges at the player!" << endl;
		playerHealth -= monsterDamage;
		cout << "The player took " << monsterDamage << " damage." << endl
			<< "Player health: " << playerHealth << "." << endl;

		// Player attacks monster
		cout << endl << "The player fights back in retaliation!" << endl;
		monsterHealth -= playerDamage;
		cout << "The monster took " << playerDamage << " damage." << endl
			<< "Monster health: " << monsterHealth << "." << endl;
	}

	//while (playerHealth > 0 && monsterHealth > 0)
	//{
	//	// Monster attacks player
	//	cout << endl << "The monster fearsomely lunges at the player!" << endl;
	//	playerHealth -= monsterDamage;
	//	cout << "The player took " << monsterDamage << " damage." << endl
	//		<< "Player health: " << playerHealth << "." << endl;
	//
	//	// Player attacks monster
	//	cout << endl << "The player fights back in retaliation!" << endl;
	//	monsterHealth -= playerDamage;
	//	cout << "The monster took " << playerDamage << " damage." << endl
	//		<< "Monster health: " << monsterHealth << "." << endl;
	//}

	// Win condition (player or monster health must be less than or equal to zero)
	if (playerHealth <= 0 && monsterHealth <= 0)
		cout << "Both parties lost the fight" << endl;
	else if (monsterHealth <= 0)
		cout << "Player won the fight!" << endl;
	else
		cout << "Monster won the fight!" << endl;

	return 0;
}//*/
