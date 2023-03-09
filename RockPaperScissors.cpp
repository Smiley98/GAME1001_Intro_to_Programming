// 1. Rock Paper Scissors logic
// 2. Repeat logic
// 3. Save/load game

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum Choice
{
	ROCK = 1,
	PAPER,
	SCISSORS
};

int main()
{
	// seed random generator with current time
	srand(time(nullptr));

	// get player input
	cout << "What is your name?" << endl;
	string playerName;
	getline(cin, playerName);
	playerName += ".txt";

	// default scores to 0
	int wins, loses, draws;
	wins = loses = draws = 0;

	// load scores if they were previously saved
	ifstream inScores(playerName);
	if (inScores.is_open())
	{
		inScores >> wins >> loses >> draws;
		inScores.close();
	}

	// loop until the player quits
	char play = 'Y';
	while (play == 'Y')
	{
		cout << "1 for rock, 2 for paper, 3 for scissors." << endl;
		int playerInput;
		cin >> playerInput;

		// only ever 1 2 and 3
		Choice aiChoice = (Choice)(rand() % 3 + 1);
		string logs[3]{ "Rock", "Paper", "Scissors" };
		// map choices 1 2 and 3 to indices 0 1 and 2
		cout << "AI choise " << logs[aiChoice - 1] << endl;

		// evaluate score (rps logic)
		Choice playerChoice = (Choice)playerInput;
		if (aiChoice == playerChoice)
		{
			cout << "Tie!" << endl;
			draws++;
		}
		else if (playerChoice == ROCK && aiChoice == SCISSORS ||
			playerChoice == SCISSORS && aiChoice == PAPER ||
			playerChoice == PAPER && aiChoice == ROCK)
		{
			cout << "Win :)" << endl;
			wins++;
		}
		else
		{
			cout << "Loss :(" << endl;
			loses++;
		}

		// log updated scores
		cout << "Scores: " <<
			wins << " wins, " <<
			loses << " loses, " <<
			draws << " draws." << endl;

		// save updated scores
		ofstream outScores(playerName, ios::out | ios::trunc);
		outScores << wins << ' ' << loses << ' ' << draws;
		outScores.close();

		// replay?
		cout << "Would you like to play again? [y/n]" << endl;
		cin >> play;
		play = toupper(play);
	}

	return 0;
}

// arrays are cool because we can use them to avoid switch statements like this!
/*
string aiLog;
switch (aiChoice)
{
case ROCK:
	aiLog = "Rock";
	break;
case PAPER:
	aiLog = "Paper";
	break;
case SCISSORS:
	aiLog = "Scissors";
	break;
default:
	break;
}
*/
