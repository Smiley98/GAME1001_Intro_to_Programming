/*
#include "Common.h"

int main()
{
	cout << "Welcome to battle simulator 2023" << endl
		<< "Preparing Player for battle..." << endl;

	const string damage = "damage";
	const string health = "health";
	const string playerName = "player";
	const string monsterName = "monster";

	int playerHealth = EnterNumber(playerName, health);
	int playerDamage = EnterNumber(playerName, damage);
	int monsterHealth = EnterNumber(monsterName, health);
	int monsterDamage = EnterNumber(monsterName, damage);

	int turnCount = 0;
	while (true)
	{
		cout << endl << "Please enter the number of turns: " << endl;
		cin >> turnCount;

		int testPlayerHealth = playerHealth;
		int testMonsterHealth = monsterHealth;
		int minTurnCount = 0;
		cout << "Calculating battle simulation..." << endl;

		while (testPlayerHealth > 0 || testMonsterHealth > 0)
		{
			minTurnCount++;
			testPlayerHealth -= monsterDamage;
			testMonsterHealth -= playerDamage;
		}
		
		// Test if there were enough turns for either the player or the monster to emerge victious!
		if (minTurnCount <= turnCount)
			break;
		else
			cout << "You need " << minTurnCount - turnCount << " more turns for a battle to the death!" << endl;
	}

	cout << "PREPARE FOR BATTLE!!!" << endl;
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

	// Win condition (player or monster health must be less than or equal to zero)
	if (playerHealth <= 0 && monsterHealth <= 0)
		cout << "Both parties lost the fight" << endl;
	else if (monsterHealth <= 0)
		cout << "Player won the fight!" << endl;
	else
		cout << "Monster won the fight!" << endl;

	return 0;
}//*/
