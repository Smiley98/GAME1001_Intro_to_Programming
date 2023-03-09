// 1. Rock Paper Scissors logic
// 2. Repeat logic
// 3. Save/load game

#include <iostream>

using namespace std;

enum Choice
{
	ROCK = 1,
	PAPER,
	SCISSORS
};

int main()
{
	string logs[3]{ "Rock", "Paper", "Scissors" };
	char play = 'Y';
	while (play == 'Y')
	{
		cout << "1 for rock, 2 for paper, 3 for scissors." << endl;
		int playerInput;
		cin >> playerInput;

		// only ever 1 2 and 3
		Choice aiChoice = (Choice)(rand() % 3 + 1);
		cout << "AI choise " << logs[aiChoice - 1] << endl;

		Choice playerChoice = (Choice)playerInput;
		if (aiChoice == playerChoice)
		{
			cout << "Tie!" << endl;
		}
		else if (playerChoice == ROCK && aiChoice == SCISSORS ||
			playerChoice == SCISSORS && aiChoice == PAPER ||
			playerChoice == PAPER && aiChoice == ROCK)
		{
			cout << "Win :)" << endl;
		}
		else
		{
			cout << "Loss :(" << endl;
		}

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
