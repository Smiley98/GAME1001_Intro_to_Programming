// 1. Barebones RPC
// 2. Repeat play
// 3. Read & store scores

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

void PrintScores(int wins, int loses, int draws)
{
	cout << "Scores: " << wins << " wins, " << loses << " loses, " << draws << " draws." << endl;
}

int main()
{
	srand(time(0));

	string playerName;
	do {
		cout << "What is your name?" << endl;
		getline(cin, playerName);
	} while (playerName.size() < 8);

	int wins, loses, draws;
	wins = loses = draws = 0;
	string userPassword;
	ifstream inScores(playerName + ".txt");
	if (inScores.is_open())
	{
		string filePassword;
		inScores >> filePassword;

		do {
			cout << "Please enter your password" << endl;
			getline(cin, userPassword);
		} while (userPassword != filePassword);

		cout << "Welcome back " + playerName << endl;
		inScores >> wins >> loses >> draws;
		PrintScores(wins, loses, draws);
		inScores.close();
	}
	else
	{
		cout << "Welcome to rock paper scissors you noob" << endl;
		cout << "Please enter your password" << endl;
		getline(cin, userPassword);
	}

	char play = 'Y';
	while (play == 'Y')
	{
		cout << "1 for rock, 2 for paper, 3 for scissors." << endl;
		int playerInput;
		cin >> playerInput;

		// rand() % 3 will be either 0, 1, or 2
		int aiInput = rand() % 3 + 1;
		string choices[3]{ "Rock", "Paper", "Scissors" };
		cout << "AI chose " << choices[aiInput - 1] << endl;

		if (playerInput == aiInput) // test for tie
		{
			cout << "Tie!" << endl;
			draws++;
		}
		else if (playerInput == ROCK && aiInput == SCISSORS ||
			playerInput == PAPER && aiInput == ROCK ||
			playerInput == SCISSORS && aiInput == PAPER)
		{
			cout << "Win :)" << endl;
			wins++;
		}
		else
		{
			cout << "Loss :(" << endl;
			loses++;
		}
		PrintScores(wins, loses, draws);

		ofstream outScores(playerName + ".txt", ios::out | ios::trunc);
		outScores << userPassword << ' ' << wins << ' ' << loses << ' ' << draws;
		outScores.close();

		cout << "Would you like to play again? [y/n]" << endl;
		cin >> play;
		play = toupper(play);
	}

	return 0;
}

// make sure we make input case-agnostic if we're comparing characters
//playerInput = toupper(playerInput);

// instead of this large switch statement, we can condence this to a small array!
//string log;
//switch (aiInput)
//{
//case ROCK:
//	log = "Rock";
//	break;
//
//case PAPER:
//	log = "Paper";
//	break;
//
//case SCISSORS:
//	log = "Scissors";
//	break;
//}