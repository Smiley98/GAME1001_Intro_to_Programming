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
	cout << "1 for rock, 2 for paper, 3 for scissors." << endl;
	int playerInput;
	cin >> playerInput;

	// only ever 1 2 and 3
	Choice aiChoice = (Choice)(rand() % 3 + 1);
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

	return 0;
}
